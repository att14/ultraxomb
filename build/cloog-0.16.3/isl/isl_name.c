/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU LGPLv2.1 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#include <string.h>
#include <isl_ctx_private.h>
#include "isl_name.h"

struct isl_name *isl_name_alloc(struct isl_ctx *ctx, const char *s)
{
	const char *copy = strdup(s);
	struct isl_name *name;

	if (!copy)
		return NULL;
	name = isl_alloc_type(ctx, struct isl_name);
	if (!name)
		goto error;

	name->ref = 1;
	name->name = copy;

	name->hash = isl_hash_init();
	name->hash = isl_hash_string(name->hash, s);

	return name;
error:
	free((char *)copy);
	return NULL;
}

static int isl_name_has_name(const void *entry, const void *val)
{
	struct isl_name *name = (struct isl_name *)entry;
	const char *s = (const char *)val;

	return !strcmp(name->name, s);
}

struct isl_name *isl_name_get(struct isl_ctx *ctx, const char *name)
{
	struct isl_hash_table_entry *entry;
	uint32_t name_hash;

	name_hash = isl_hash_string(isl_hash_init(), name);
	entry = isl_hash_table_find(ctx, &ctx->name_hash, name_hash,
					isl_name_has_name, name, 1);
	if (!entry)
		return NULL;
	if (entry->data)
		return isl_name_copy(ctx, entry->data);
	entry->data = isl_name_alloc(ctx, name);
	if (!entry->data)
		ctx->name_hash.n--;
	return entry->data;
}

struct isl_name *isl_name_copy(struct isl_ctx *ctx, struct isl_name *name)
{
	if (!name)
		return NULL;

	name->ref++;
	return name;
}

static int isl_name_eq(const void *entry, const void *name)
{
	return entry == name;
}

uint32_t isl_hash_name(uint32_t hash, struct isl_name *name)
{
	if (name)
		isl_hash_hash(hash, name->hash);

	return hash;
}

void isl_name_free(struct isl_ctx *ctx, struct isl_name *name)
{
	uint32_t name_hash;
	struct isl_hash_table_entry *entry;

	if (!name)
		return;

	if (--name->ref > 0)
		return;

	name_hash = isl_hash_string(isl_hash_init(), name->name);
	entry = isl_hash_table_find(ctx, &ctx->name_hash, name_hash,
					isl_name_eq, name, 0);
	isl_assert(ctx, entry, return);
	isl_hash_table_remove(ctx, &ctx->name_hash, entry);

	free((char *)name->name);
	free(name);
}
