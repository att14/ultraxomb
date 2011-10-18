/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU LGPLv2.1 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#include <isl_map_private.h>
#include <isl_div_private.h>
#include <isl/map.h>
#include <isl_dim_private.h>
#include <isl/seq.h>
#include <isl/aff.h>

isl_ctx *isl_div_get_ctx(__isl_keep isl_div *div)
{
	return div ? div->ctx : NULL;
}

static unsigned n(struct isl_div *d, enum isl_dim_type type)
{
	struct isl_dim *dim = d->bmap->dim;
	switch (type) {
	case isl_dim_param:	return dim->nparam;
	case isl_dim_in:	return dim->n_in;
	case isl_dim_out:	return dim->n_out;
	case isl_dim_div:	return d->bmap->n_div;
	default:		return 0;
	}
}

unsigned isl_div_dim(__isl_keep isl_div *div, enum isl_dim_type type)
{
	return n(div, type);
}

static unsigned offset(struct isl_div *d, enum isl_dim_type type)
{
	struct isl_dim *dim = d->bmap->dim;
	switch (type) {
	case isl_dim_param: return 1 + 1;
	case isl_dim_in:    return 1 + 1 + dim->nparam;
	case isl_dim_out:   return 1 + 1 + dim->nparam + dim->n_in;
	case isl_dim_div:   return 1 + 1 + dim->nparam + dim->n_in + dim->n_out;
	default:	    return 0;
	}
}

struct isl_div *isl_basic_map_div(struct isl_basic_map *bmap, int pos)
{
	struct isl_div *div;

	if (!bmap)
		goto error;

	isl_assert(bmap->ctx, pos < bmap->n_div, goto error);
	
	div = isl_alloc_type(bmap->ctx, struct isl_div);
	if (!div)
		goto error;

	div->ctx = bmap->ctx;
	isl_ctx_ref(div->ctx);
	div->ref = 1;
	div->bmap = bmap;
	div->line = &bmap->div[pos];

	return div;
error:
	isl_basic_map_free(bmap);
	return NULL;
}

struct isl_div *isl_basic_set_div(struct isl_basic_set *bset, int pos)
{
	return isl_basic_map_div((struct isl_basic_map *)bset, pos);
}

__isl_give isl_div *isl_div_div(__isl_take isl_div *div, int pos)
{
	isl_basic_map *bmap;
	if (!div)
		return NULL;
	bmap = isl_basic_map_copy(div->bmap);
	isl_div_free(div);
	return isl_basic_map_div(bmap, pos);
}

struct isl_div *isl_div_alloc(struct isl_dim *dim)
{
	struct isl_basic_map *bmap;

	if (!dim)
		return NULL;

	bmap = isl_basic_map_alloc_dim(dim, 1, 0, 0);
	if (!bmap)
		return NULL;

	isl_basic_map_alloc_div(bmap);
	isl_seq_clr(bmap->div[0], 1 + 1 + isl_basic_map_total_dim(bmap));
	return isl_basic_map_div(bmap, 0);
}

__isl_give isl_div *isl_div_copy(__isl_keep isl_div *div)
{
	if (!div)
		return NULL;

	div->ref++;
	return div;
}

void isl_div_free(struct isl_div *c)
{
	if (!c)
		return;

	if (--c->ref > 0)
		return;

	isl_basic_map_free(c->bmap);
	isl_ctx_deref(c->ctx);
	free(c);
}

void isl_div_get_constant(struct isl_div *div, isl_int *v)
{
	if (!div)
		return;
	isl_int_set(*v, div->line[0][1]);
}

void isl_div_get_denominator(struct isl_div *div, isl_int *v)
{
	if (!div)
		return;
	isl_int_set(*v, div->line[0][0]);
}

void isl_div_get_coefficient(struct isl_div *div,
	enum isl_dim_type type, int pos, isl_int *v)
{
	if (!div)
		return;

	isl_assert(div->ctx, pos < n(div, type), return);
	isl_int_set(*v, div->line[0][offset(div, type) + pos]);
}

void isl_div_set_constant(struct isl_div *div, isl_int v)
{
	if (!div)
		return;
	isl_int_set(div->line[0][1], v);
}

void isl_div_set_denominator(struct isl_div *div, isl_int v)
{
	if (!div)
		return;
	isl_int_set(div->line[0][0], v);
}

void isl_div_set_coefficient(struct isl_div *div,
	enum isl_dim_type type, int pos, isl_int v)
{
	if (!div)
		return;

	isl_assert(div->ctx, pos < n(div, type), return);
	isl_int_set(div->line[0][offset(div, type) + pos], v);
}

__isl_give isl_aff *isl_aff_from_div(__isl_take isl_div *div)
{
	isl_aff *aff;
	int pos;

	if (!div)
		return NULL;

	pos = div->line - div->bmap->div;
	aff = isl_aff_zero(isl_basic_map_get_local_space(div->bmap));
	aff = isl_aff_set_coefficient_si(aff, isl_dim_div, pos, 1);

	isl_div_free(div);
	return aff;
}
