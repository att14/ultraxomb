/* Type information for optabs.c.
   Copyright (C) 2004, 2007, 2009 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_libfunc_entry (void *x_p)
{
  struct libfunc_entry * const x = (struct libfunc_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).libfunc);
    }
}

void
gt_ggc_m_P13libfunc_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_13libfunc_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_libfunc_entry (void *x_p)
{
  struct libfunc_entry * const x = (struct libfunc_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13libfunc_entry, gt_ggc_e_13libfunc_entry))
    {
      gt_pch_n_7rtx_def ((*x).libfunc);
    }
}

void
gt_pch_n_P13libfunc_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P13libfunc_entry4htab, gt_e_P13libfunc_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_13libfunc_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P13libfunc_entry4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_13libfunc_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct libfunc_entry * const x ATTRIBUTE_UNUSED = (struct libfunc_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).libfunc), cookie);
}

void
gt_pch_p_P13libfunc_entry4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_optabs_h[] = {
  {
    &libfunc_decls,
    1,
    sizeof (libfunc_decls),
    &gt_ggc_m_P9tree_node4htab,
    &gt_pch_n_P9tree_node4htab
  },
  {
    &libfunc_hash,
    1,
    sizeof (libfunc_hash),
    &gt_ggc_m_P13libfunc_entry4htab,
    &gt_pch_n_P13libfunc_entry4htab
  },
  LAST_GGC_ROOT_TAB
};

