/*
    This file is part of darktable,
    copyright (c) 2010 Henrik Andersson.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DTGTK_PAINT_H
#define DTGTK_PAINT_H

#include <gtk/gtk.h>
#include <cairo.h>

/** Paint a arrow left or right */
void dtgtk_cairo_paint_arrow(cairo_t *cr,gint x,gint y,gint w,gint h,gboolean left);
/** Paint a reset icon */
void dtgtk_cairo_paint_reset(cairo_t *cr,gint x,gint y,gint w,gint h);
/** Paint a flip icon */
void dtgtk_cairo_paint_flip(cairo_t *cr,gint x,gint y,gint w,gint h,gboolean horizontal);

#endif