/*
 * AmigaOS shared library implementation of libpixman-1.
 *
 * Copyright (C) 2017 Fredrik Wikstrom <fredrik@a500.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS `AS IS'
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "pixman_vectors.h"

static const APTR main_v1_vectors[] =
{
	_main_Obtain,
	_main_Release,
	NULL,
	NULL,
	pixman_transform_init_identity,
	pixman_transform_point_3d,
	pixman_transform_point,
	pixman_transform_multiply,
	pixman_transform_init_scale,
	pixman_transform_scale,
	pixman_transform_init_rotate,
	pixman_transform_rotate,
	pixman_transform_init_translate,
	pixman_transform_translate,
	pixman_transform_bounds,
	pixman_transform_invert,
	pixman_transform_is_identity,
	pixman_transform_is_scale,
	pixman_transform_is_int_translate,
	pixman_transform_is_inverse,
	pixman_transform_from_pixman_f_transform,
	pixman_f_transform_from_pixman_transform,
	pixman_f_transform_invert,
	pixman_f_transform_point,
	pixman_f_transform_point_3d,
	pixman_f_transform_multiply,
	pixman_f_transform_init_scale,
	pixman_f_transform_scale,
	pixman_f_transform_init_rotate,
	pixman_f_transform_rotate,
	pixman_f_transform_init_translate,
	pixman_f_transform_translate,
	pixman_f_transform_bounds,
	pixman_f_transform_init_identity,
	pixman_region_set_static_pointers,
	pixman_region_init,
	pixman_region_init_rect,
	pixman_region_init_rects,
	pixman_region_init_with_extents,
	pixman_region_init_from_image,
	pixman_region_fini,
	pixman_region_translate,
	pixman_region_copy,
	pixman_region_intersect,
	pixman_region_union,
	pixman_region_union_rect,
	pixman_region_intersect_rect,
	pixman_region_subtract,
	pixman_region_inverse,
	pixman_region_contains_point,
	pixman_region_contains_rectangle,
	pixman_region_not_empty,
	pixman_region_extents,
	pixman_region_n_rects,
	pixman_region_rectangles,
	pixman_region_equal,
	pixman_region_selfcheck,
	pixman_region_reset,
	pixman_region_clear,
	pixman_region32_init,
	pixman_region32_init_rect,
	pixman_region32_init_rects,
	pixman_region32_init_with_extents,
	pixman_region32_init_from_image,
	pixman_region32_fini,
	pixman_region32_translate,
	pixman_region32_copy,
	pixman_region32_intersect,
	pixman_region32_union,
	pixman_region32_intersect_rect,
	pixman_region32_union_rect,
	pixman_region32_subtract,
	pixman_region32_inverse,
	pixman_region32_contains_point,
	pixman_region32_contains_rectangle,
	pixman_region32_not_empty,
	pixman_region32_extents,
	pixman_region32_n_rects,
	pixman_region32_rectangles,
	pixman_region32_equal,
	pixman_region32_selfcheck,
	pixman_region32_reset,
	pixman_region32_clear,
	pixman_blt,
	pixman_fill,
	pixman_version,
	pixman_version_string,
	pixman_format_supported_destination,
	pixman_format_supported_source,
	pixman_image_create_solid_fill,
	pixman_image_create_linear_gradient,
	pixman_image_create_radial_gradient,
	pixman_image_create_conical_gradient,
	pixman_image_create_bits,
	pixman_image_create_bits_no_clear,
	pixman_image_ref,
	pixman_image_unref,
	pixman_image_set_destroy_function,
	pixman_image_get_destroy_data,
	pixman_image_set_clip_region,
	pixman_image_set_clip_region32,
	pixman_image_set_has_client_clip,
	pixman_image_set_transform,
	pixman_image_set_repeat,
	pixman_image_set_filter,
	pixman_image_set_source_clipping,
	pixman_image_set_alpha_map,
	pixman_image_set_component_alpha,
	pixman_image_get_component_alpha,
	pixman_image_set_accessors,
	pixman_image_set_indexed,
	pixman_image_get_data,
	pixman_image_get_width,
	pixman_image_get_height,
	pixman_image_get_stride,
	pixman_image_get_depth,
	pixman_image_get_format,
	pixman_filter_create_separable_convolution,
	pixman_image_fill_rectangles,
	pixman_image_fill_boxes,
	pixman_compute_composite_region,
	pixman_image_composite,
	pixman_image_composite32,
	pixman_disable_out_of_bounds_workaround,
	pixman_glyph_cache_create,
	pixman_glyph_cache_destroy,
	pixman_glyph_cache_freeze,
	pixman_glyph_cache_thaw,
	pixman_glyph_cache_lookup,
	pixman_glyph_cache_insert,
	pixman_glyph_cache_remove,
	pixman_glyph_get_extents,
	pixman_glyph_get_mask_format,
	pixman_composite_glyphs,
	pixman_composite_glyphs_no_mask,
	pixman_sample_ceil_y,
	pixman_sample_floor_y,
	pixman_edge_step,
	pixman_edge_init,
	pixman_line_fixed_edge_init,
	pixman_rasterize_edges,
	pixman_add_traps,
	pixman_add_trapezoids,
	pixman_rasterize_trapezoid,
	pixman_composite_trapezoids,
	pixman_composite_triangles,
	pixman_add_triangles
};

