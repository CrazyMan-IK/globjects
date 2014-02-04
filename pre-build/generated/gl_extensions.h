#pragma once

namespace glow {

enum Extension
{
	GLOW_3DFX_multisample,
	GLOW_3DFX_tbuffer,
	GLOW_3DFX_texture_compression_FXT1,
	GLOW_AMD_blend_minmax_factor,
	GLOW_AMD_compressed_3DC_texture,
	GLOW_AMD_compressed_ATC_texture,
	GLOW_AMD_conservative_depth,
	GLOW_AMD_debug_output,
	GLOW_AMD_depth_clamp_separate,
	GLOW_AMD_draw_buffers_blend,
	GLOW_AMD_interleaved_elements,
	GLOW_AMD_multi_draw_indirect,
	GLOW_AMD_name_gen_delete,
	GLOW_AMD_occlusion_query_event,
	GLOW_AMD_performance_monitor,
	GLOW_AMD_pinned_memory,
	GLOW_AMD_program_binary_Z400,
	GLOW_AMD_query_buffer_object,
	GLOW_AMD_sample_positions,
	GLOW_AMD_seamless_cubemap_per_texture,
	GLOW_AMD_shader_atomic_counter_ops,
	GLOW_AMD_shader_stencil_export,
	GLOW_AMD_shader_trinary_minmax,
	GLOW_AMD_sparse_texture,
	GLOW_AMD_stencil_operation_extended,
	GLOW_AMD_texture_texture4,
	GLOW_AMD_transform_feedback3_lines_triangles,
	GLOW_AMD_vertex_shader_layer,
	GLOW_AMD_vertex_shader_tessellator,
	GLOW_AMD_vertex_shader_viewport_index,
	GLOW_ANGLE_depth_texture,
	GLOW_ANGLE_framebuffer_blit,
	GLOW_ANGLE_framebuffer_multisample,
	GLOW_ANGLE_instanced_arrays,
	GLOW_ANGLE_pack_reverse_row_order,
	GLOW_ANGLE_program_binary,
	GLOW_ANGLE_texture_compression_dxt3,
	GLOW_ANGLE_texture_compression_dxt5,
	GLOW_ANGLE_texture_usage,
	GLOW_ANGLE_translated_shader_source,
	GLOW_APPLE_aux_depth_stencil,
	GLOW_APPLE_client_storage,
	GLOW_APPLE_copy_texture_levels,
	GLOW_APPLE_element_array,
	GLOW_APPLE_fence,
	GLOW_APPLE_float_pixels,
	GLOW_APPLE_flush_buffer_range,
	GLOW_APPLE_framebuffer_multisample,
	GLOW_APPLE_object_purgeable,
	GLOW_APPLE_rgb_422,
	GLOW_APPLE_row_bytes,
	GLOW_APPLE_specular_vector,
	GLOW_APPLE_sync,
	GLOW_APPLE_texture_2D_limited_npot,
	GLOW_APPLE_texture_format_BGRA8888,
	GLOW_APPLE_texture_max_level,
	GLOW_APPLE_texture_range,
	GLOW_APPLE_transform_hint,
	GLOW_APPLE_vertex_array_object,
	GLOW_APPLE_vertex_array_range,
	GLOW_APPLE_vertex_program_evaluators,
	GLOW_APPLE_ycbcr_422,
	GLOW_ARB_ES2_compatibility,
	GLOW_ARB_ES3_compatibility,
	GLOW_ARB_arrays_of_arrays,
	GLOW_ARB_base_instance,
	GLOW_ARB_bindless_texture,
	GLOW_ARB_blend_func_extended,
	GLOW_ARB_buffer_storage,
	GLOW_ARB_cl_event,
	GLOW_ARB_clear_buffer_object,
	GLOW_ARB_clear_texture,
	GLOW_ARB_color_buffer_float,
	GLOW_ARB_compatibility,
	GLOW_ARB_compressed_texture_pixel_storage,
	GLOW_ARB_compute_shader,
	GLOW_ARB_compute_variable_group_size,
	GLOW_ARB_conservative_depth,
	GLOW_ARB_copy_buffer,
	GLOW_ARB_copy_image,
	GLOW_ARB_debug_output,
	GLOW_ARB_depth_buffer_float,
	GLOW_ARB_depth_clamp,
	GLOW_ARB_depth_texture,
	GLOW_ARB_draw_buffers,
	GLOW_ARB_draw_buffers_blend,
	GLOW_ARB_draw_elements_base_vertex,
	GLOW_ARB_draw_indirect,
	GLOW_ARB_draw_instanced,
	GLOW_ARB_enhanced_layouts,
	GLOW_ARB_explicit_attrib_location,
	GLOW_ARB_explicit_uniform_location,
	GLOW_ARB_fragment_coord_conventions,
	GLOW_ARB_fragment_layer_viewport,
	GLOW_ARB_fragment_program,
	GLOW_ARB_fragment_program_shadow,
	GLOW_ARB_fragment_shader,
	GLOW_ARB_framebuffer_no_attachments,
	GLOW_ARB_framebuffer_object,
	GLOW_ARB_framebuffer_sRGB,
	GLOW_ARB_geometry_shader4,
	GLOW_ARB_get_program_binary,
	GLOW_ARB_gpu_shader5,
	GLOW_ARB_gpu_shader_fp64,
	GLOW_ARB_half_float_pixel,
	GLOW_ARB_half_float_vertex,
	GLOW_ARB_imaging,
	GLOW_ARB_indirect_parameters,
	GLOW_ARB_instanced_arrays,
	GLOW_ARB_internalformat_query,
	GLOW_ARB_internalformat_query2,
	GLOW_ARB_invalidate_subdata,
	GLOW_ARB_map_buffer_alignment,
	GLOW_ARB_map_buffer_range,
	GLOW_ARB_matrix_palette,
	GLOW_ARB_multi_bind,
	GLOW_ARB_multi_draw_indirect,
	GLOW_ARB_multisample,
	GLOW_ARB_multitexture,
	GLOW_ARB_occlusion_query,
	GLOW_ARB_occlusion_query2,
	GLOW_ARB_pixel_buffer_object,
	GLOW_ARB_point_parameters,
	GLOW_ARB_point_sprite,
	GLOW_ARB_program_interface_query,
	GLOW_ARB_provoking_vertex,
	GLOW_ARB_query_buffer_object,
	GLOW_ARB_robust_buffer_access_behavior,
	GLOW_ARB_robustness,
	GLOW_ARB_robustness_isolation,
	GLOW_ARB_sample_shading,
	GLOW_ARB_sampler_objects,
	GLOW_ARB_seamless_cube_map,
	GLOW_ARB_seamless_cubemap_per_texture,
	GLOW_ARB_separate_shader_objects,
	GLOW_ARB_shader_atomic_counters,
	GLOW_ARB_shader_bit_encoding,
	GLOW_ARB_shader_draw_parameters,
	GLOW_ARB_shader_group_vote,
	GLOW_ARB_shader_image_load_store,
	GLOW_ARB_shader_image_size,
	GLOW_ARB_shader_objects,
	GLOW_ARB_shader_precision,
	GLOW_ARB_shader_stencil_export,
	GLOW_ARB_shader_storage_buffer_object,
	GLOW_ARB_shader_subroutine,
	GLOW_ARB_shader_texture_lod,
	GLOW_ARB_shading_language_100,
	GLOW_ARB_shading_language_420pack,
	GLOW_ARB_shading_language_include,
	GLOW_ARB_shading_language_packing,
	GLOW_ARB_shadow,
	GLOW_ARB_shadow_ambient,
	GLOW_ARB_sparse_texture,
	GLOW_ARB_stencil_texturing,
	GLOW_ARB_sync,
	GLOW_ARB_tessellation_shader,
	GLOW_ARB_texture_border_clamp,
	GLOW_ARB_texture_buffer_object,
	GLOW_ARB_texture_buffer_object_rgb32,
	GLOW_ARB_texture_buffer_range,
	GLOW_ARB_texture_compression,
	GLOW_ARB_texture_compression_bptc,
	GLOW_ARB_texture_compression_rgtc,
	GLOW_ARB_texture_cube_map,
	GLOW_ARB_texture_cube_map_array,
	GLOW_ARB_texture_env_add,
	GLOW_ARB_texture_env_combine,
	GLOW_ARB_texture_env_crossbar,
	GLOW_ARB_texture_env_dot3,
	GLOW_ARB_texture_float,
	GLOW_ARB_texture_gather,
	GLOW_ARB_texture_mirror_clamp_to_edge,
	GLOW_ARB_texture_mirrored_repeat,
	GLOW_ARB_texture_multisample,
	GLOW_ARB_texture_non_power_of_two,
	GLOW_ARB_texture_query_levels,
	GLOW_ARB_texture_query_lod,
	GLOW_ARB_texture_rectangle,
	GLOW_ARB_texture_rg,
	GLOW_ARB_texture_rgb10_a2ui,
	GLOW_ARB_texture_stencil8,
	GLOW_ARB_texture_storage,
	GLOW_ARB_texture_storage_multisample,
	GLOW_ARB_texture_swizzle,
	GLOW_ARB_texture_view,
	GLOW_ARB_timer_query,
	GLOW_ARB_transform_feedback2,
	GLOW_ARB_transform_feedback3,
	GLOW_ARB_transform_feedback_instanced,
	GLOW_ARB_transpose_matrix,
	GLOW_ARB_uniform_buffer_object,
	GLOW_ARB_vertex_array_bgra,
	GLOW_ARB_vertex_array_object,
	GLOW_ARB_vertex_attrib_64bit,
	GLOW_ARB_vertex_attrib_binding,
	GLOW_ARB_vertex_blend,
	GLOW_ARB_vertex_buffer_object,
	GLOW_ARB_vertex_program,
	GLOW_ARB_vertex_shader,
	GLOW_ARB_vertex_type_10f_11f_11f_rev,
	GLOW_ARB_vertex_type_2_10_10_10_rev,
	GLOW_ARB_viewport_array,
	GLOW_ARB_window_pos,
	GLOW_ARM_mali_program_binary,
	GLOW_ARM_mali_shader_binary,
	GLOW_ARM_rgba8,
	GLOW_ATI_draw_buffers,
	GLOW_ATI_element_array,
	GLOW_ATI_envmap_bumpmap,
	GLOW_ATI_fragment_shader,
	GLOW_ATI_map_object_buffer,
	GLOW_ATI_meminfo,
	GLOW_ATI_pixel_format_float,
	GLOW_ATI_pn_triangles,
	GLOW_ATI_separate_stencil,
	GLOW_ATI_text_fragment_shader,
	GLOW_ATI_texture_env_combine3,
	GLOW_ATI_texture_float,
	GLOW_ATI_texture_mirror_once,
	GLOW_ATI_vertex_array_object,
	GLOW_ATI_vertex_attrib_array_object,
	GLOW_ATI_vertex_streams,
	GLOW_DMP_shader_binary,
	GLOW_EXT_422_pixels,
	GLOW_EXT_abgr,
	GLOW_EXT_bgra,
	GLOW_EXT_bindable_uniform,
	GLOW_EXT_blend_color,
	GLOW_EXT_blend_equation_separate,
	GLOW_EXT_blend_func_separate,
	GLOW_EXT_blend_logic_op,
	GLOW_EXT_blend_minmax,
	GLOW_EXT_blend_subtract,
	GLOW_EXT_clip_volume_hint,
	GLOW_EXT_cmyka,
	GLOW_EXT_color_buffer_half_float,
	GLOW_EXT_color_subtable,
	GLOW_EXT_compiled_vertex_array,
	GLOW_EXT_convolution,
	GLOW_EXT_coordinate_frame,
	GLOW_EXT_copy_texture,
	GLOW_EXT_cull_vertex,
	GLOW_EXT_debug_label,
	GLOW_EXT_debug_marker,
	GLOW_EXT_depth_bounds_test,
	GLOW_EXT_direct_state_access,
	GLOW_EXT_discard_framebuffer,
	GLOW_EXT_disjoint_timer_query,
	GLOW_EXT_draw_buffers,
	GLOW_EXT_draw_buffers2,
	GLOW_EXT_draw_instanced,
	GLOW_EXT_draw_range_elements,
	GLOW_EXT_fog_coord,
	GLOW_EXT_framebuffer_blit,
	GLOW_EXT_framebuffer_multisample,
	GLOW_EXT_framebuffer_multisample_blit_scaled,
	GLOW_EXT_framebuffer_object,
	GLOW_EXT_framebuffer_sRGB,
	GLOW_EXT_geometry_shader4,
	GLOW_EXT_gpu_program_parameters,
	GLOW_EXT_gpu_shader4,
	GLOW_EXT_histogram,
	GLOW_EXT_index_array_formats,
	GLOW_EXT_index_func,
	GLOW_EXT_index_material,
	GLOW_EXT_index_texture,
	GLOW_EXT_instanced_arrays,
	GLOW_EXT_light_texture,
	GLOW_EXT_map_buffer_range,
	GLOW_EXT_misc_attribute,
	GLOW_EXT_multi_draw_arrays,
	GLOW_EXT_multisample,
	GLOW_EXT_multisampled_render_to_texture,
	GLOW_EXT_multiview_draw_buffers,
	GLOW_EXT_occlusion_query_boolean,
	GLOW_EXT_packed_depth_stencil,
	GLOW_EXT_packed_float,
	GLOW_EXT_packed_pixels,
	GLOW_EXT_paletted_texture,
	GLOW_EXT_pixel_buffer_object,
	GLOW_EXT_pixel_transform,
	GLOW_EXT_pixel_transform_color_table,
	GLOW_EXT_point_parameters,
	GLOW_EXT_polygon_offset,
	GLOW_EXT_provoking_vertex,
	GLOW_EXT_pvrtc_sRGB,
	GLOW_EXT_read_format_bgra,
	GLOW_EXT_rescale_normal,
	GLOW_EXT_robustness,
	GLOW_EXT_sRGB,
	GLOW_EXT_sRGB_write_control,
	GLOW_EXT_secondary_color,
	GLOW_EXT_separate_shader_objects,
	GLOW_EXT_separate_specular_color,
	GLOW_EXT_shader_framebuffer_fetch,
	GLOW_EXT_shader_image_load_store,
	GLOW_EXT_shader_integer_mix,
	GLOW_EXT_shader_texture_lod,
	GLOW_EXT_shadow_funcs,
	GLOW_EXT_shadow_samplers,
	GLOW_EXT_shared_texture_palette,
	GLOW_EXT_stencil_clear_tag,
	GLOW_EXT_stencil_two_side,
	GLOW_EXT_stencil_wrap,
	GLOW_EXT_subtexture,
	GLOW_EXT_texture,
	GLOW_EXT_texture3D,
	GLOW_EXT_texture_array,
	GLOW_EXT_texture_buffer_object,
	GLOW_EXT_texture_compression_dxt1,
	GLOW_EXT_texture_compression_latc,
	GLOW_EXT_texture_compression_rgtc,
	GLOW_EXT_texture_compression_s3tc,
	GLOW_EXT_texture_cube_map,
	GLOW_EXT_texture_env_add,
	GLOW_EXT_texture_env_combine,
	GLOW_EXT_texture_env_dot3,
	GLOW_EXT_texture_filter_anisotropic,
	GLOW_EXT_texture_format_BGRA8888,
	GLOW_EXT_texture_integer,
	GLOW_EXT_texture_lod_bias,
	GLOW_EXT_texture_mirror_clamp,
	GLOW_EXT_texture_object,
	GLOW_EXT_texture_perturb_normal,
	GLOW_EXT_texture_rg,
	GLOW_EXT_texture_sRGB,
	GLOW_EXT_texture_sRGB_decode,
	GLOW_EXT_texture_shared_exponent,
	GLOW_EXT_texture_snorm,
	GLOW_EXT_texture_storage,
	GLOW_EXT_texture_swizzle,
	GLOW_EXT_texture_type_2_10_10_10_REV,
	GLOW_EXT_timer_query,
	GLOW_EXT_transform_feedback,
	GLOW_EXT_unpack_subimage,
	GLOW_EXT_vertex_array,
	GLOW_EXT_vertex_array_bgra,
	GLOW_EXT_vertex_attrib_64bit,
	GLOW_EXT_vertex_shader,
	GLOW_EXT_vertex_weighting,
	GLOW_EXT_x11_sync_object,
	GLOW_FJ_shader_binary_GCCSO,
	GLOW_GREMEDY_frame_terminator,
	GLOW_GREMEDY_string_marker,
	GLOW_HP_convolution_border_modes,
	GLOW_HP_image_transform,
	GLOW_HP_occlusion_test,
	GLOW_HP_texture_lighting,
	GLOW_IBM_cull_vertex,
	GLOW_IBM_multimode_draw_arrays,
	GLOW_IBM_rasterpos_clip,
	GLOW_IBM_static_data,
	GLOW_IBM_texture_mirrored_repeat,
	GLOW_IBM_vertex_array_lists,
	GLOW_IMG_multisampled_render_to_texture,
	GLOW_IMG_program_binary,
	GLOW_IMG_read_format,
	GLOW_IMG_shader_binary,
	GLOW_IMG_texture_compression_pvrtc,
	GLOW_IMG_texture_compression_pvrtc2,
	GLOW_IMG_texture_env_enhanced_fixed_function,
	GLOW_IMG_user_clip_plane,
	GLOW_INGR_blend_func_separate,
	GLOW_INGR_color_clamp,
	GLOW_INGR_interlace_read,
	GLOW_INTEL_fragment_shader_ordering,
	GLOW_INTEL_map_texture,
	GLOW_INTEL_parallel_arrays,
	GLOW_INTEL_performance_query,
	GLOW_KHR_debug,
	GLOW_KHR_texture_compression_astc_hdr,
	GLOW_KHR_texture_compression_astc_ldr,
	GLOW_MESAX_texture_stack,
	GLOW_MESA_pack_invert,
	GLOW_MESA_resize_buffers,
	GLOW_MESA_window_pos,
	GLOW_MESA_ycbcr_texture,
	GLOW_NVX_conditional_render,
	GLOW_NVX_gpu_memory_info,
	GLOW_NV_bindless_multi_draw_indirect,
	GLOW_NV_bindless_texture,
	GLOW_NV_blend_equation_advanced,
	GLOW_NV_blend_equation_advanced_coherent,
	GLOW_NV_blend_square,
	GLOW_NV_compute_program5,
	GLOW_NV_conditional_render,
	GLOW_NV_copy_buffer,
	GLOW_NV_copy_depth_to_color,
	GLOW_NV_copy_image,
	GLOW_NV_coverage_sample,
	GLOW_NV_deep_texture3D,
	GLOW_NV_depth_buffer_float,
	GLOW_NV_depth_clamp,
	GLOW_NV_depth_nonlinear,
	GLOW_NV_draw_buffers,
	GLOW_NV_draw_instanced,
	GLOW_NV_draw_texture,
	GLOW_NV_evaluators,
	GLOW_NV_explicit_attrib_location,
	GLOW_NV_explicit_multisample,
	GLOW_NV_fbo_color_attachments,
	GLOW_NV_fence,
	GLOW_NV_float_buffer,
	GLOW_NV_fog_distance,
	GLOW_NV_fragment_program,
	GLOW_NV_fragment_program2,
	GLOW_NV_fragment_program4,
	GLOW_NV_fragment_program_option,
	GLOW_NV_framebuffer_blit,
	GLOW_NV_framebuffer_multisample,
	GLOW_NV_framebuffer_multisample_coverage,
	GLOW_NV_generate_mipmap_sRGB,
	GLOW_NV_geometry_program4,
	GLOW_NV_geometry_shader4,
	GLOW_NV_gpu_program4,
	GLOW_NV_gpu_program5,
	GLOW_NV_gpu_program5_mem_extended,
	GLOW_NV_gpu_shader5,
	GLOW_NV_half_float,
	GLOW_NV_instanced_arrays,
	GLOW_NV_light_max_exponent,
	GLOW_NV_multisample_coverage,
	GLOW_NV_multisample_filter_hint,
	GLOW_NV_non_square_matrices,
	GLOW_NV_occlusion_query,
	GLOW_NV_packed_depth_stencil,
	GLOW_NV_parameter_buffer_object,
	GLOW_NV_parameter_buffer_object2,
	GLOW_NV_path_rendering,
	GLOW_NV_pixel_data_range,
	GLOW_NV_point_sprite,
	GLOW_NV_present_video,
	GLOW_NV_primitive_restart,
	GLOW_NV_read_buffer,
	GLOW_NV_read_buffer_front,
	GLOW_NV_read_depth,
	GLOW_NV_read_depth_stencil,
	GLOW_NV_read_stencil,
	GLOW_NV_register_combiners,
	GLOW_NV_register_combiners2,
	GLOW_NV_sRGB_formats,
	GLOW_NV_shader_atomic_counters,
	GLOW_NV_shader_atomic_float,
	GLOW_NV_shader_buffer_load,
	GLOW_NV_shader_buffer_store,
	GLOW_NV_shader_storage_buffer_object,
	GLOW_NV_shadow_samplers_array,
	GLOW_NV_shadow_samplers_cube,
	GLOW_NV_tessellation_program5,
	GLOW_NV_texgen_emboss,
	GLOW_NV_texgen_reflection,
	GLOW_NV_texture_barrier,
	GLOW_NV_texture_border_clamp,
	GLOW_NV_texture_compression_s3tc_update,
	GLOW_NV_texture_compression_vtc,
	GLOW_NV_texture_env_combine4,
	GLOW_NV_texture_expand_normal,
	GLOW_NV_texture_multisample,
	GLOW_NV_texture_npot_2D_mipmap,
	GLOW_NV_texture_rectangle,
	GLOW_NV_texture_shader,
	GLOW_NV_texture_shader2,
	GLOW_NV_texture_shader3,
	GLOW_NV_transform_feedback,
	GLOW_NV_transform_feedback2,
	GLOW_NV_vdpau_interop,
	GLOW_NV_vertex_array_range,
	GLOW_NV_vertex_array_range2,
	GLOW_NV_vertex_attrib_integer_64bit,
	GLOW_NV_vertex_buffer_unified_memory,
	GLOW_NV_vertex_program,
	GLOW_NV_vertex_program1_1,
	GLOW_NV_vertex_program2,
	GLOW_NV_vertex_program2_option,
	GLOW_NV_vertex_program3,
	GLOW_NV_vertex_program4,
	GLOW_NV_video_capture,
	GLOW_OES_EGL_image,
	GLOW_OES_EGL_image_external,
	GLOW_OES_blend_equation_separate,
	GLOW_OES_blend_func_separate,
	GLOW_OES_blend_subtract,
	GLOW_OES_byte_coordinates,
	GLOW_OES_compressed_ETC1_RGB8_texture,
	GLOW_OES_compressed_paletted_texture,
	GLOW_OES_depth24,
	GLOW_OES_depth32,
	GLOW_OES_depth_texture,
	GLOW_OES_draw_texture,
	GLOW_OES_element_index_uint,
	GLOW_OES_extended_matrix_palette,
	GLOW_OES_fbo_render_mipmap,
	GLOW_OES_fixed_point,
	GLOW_OES_fragment_precision_high,
	GLOW_OES_framebuffer_object,
	GLOW_OES_get_program_binary,
	GLOW_OES_mapbuffer,
	GLOW_OES_matrix_get,
	GLOW_OES_matrix_palette,
	GLOW_OES_packed_depth_stencil,
	GLOW_OES_point_size_array,
	GLOW_OES_point_sprite,
	GLOW_OES_query_matrix,
	GLOW_OES_read_format,
	GLOW_OES_required_internalformat,
	GLOW_OES_rgb8_rgba8,
	GLOW_OES_single_precision,
	GLOW_OES_standard_derivatives,
	GLOW_OES_stencil1,
	GLOW_OES_stencil4,
	GLOW_OES_stencil8,
	GLOW_OES_stencil_wrap,
	GLOW_OES_surfaceless_context,
	GLOW_OES_texture_3D,
	GLOW_OES_texture_compression_astc,
	GLOW_OES_texture_cube_map,
	GLOW_OES_texture_env_crossbar,
	GLOW_OES_texture_float,
	GLOW_OES_texture_float_linear,
	GLOW_OES_texture_half_float,
	GLOW_OES_texture_half_float_linear,
	GLOW_OES_texture_mirrored_repeat,
	GLOW_OES_texture_npot,
	GLOW_OES_vertex_array_object,
	GLOW_OES_vertex_half_float,
	GLOW_OES_vertex_type_10_10_10_2,
	GLOW_OML_interlace,
	GLOW_OML_resample,
	GLOW_OML_subsample,
	GLOW_PGI_misc_hints,
	GLOW_PGI_vertex_hints,
	GLOW_QCOM_alpha_test,
	GLOW_QCOM_binning_control,
	GLOW_QCOM_driver_control,
	GLOW_QCOM_extended_get,
	GLOW_QCOM_extended_get2,
	GLOW_QCOM_perfmon_global_mode,
	GLOW_QCOM_tiled_rendering,
	GLOW_QCOM_writeonly_rendering,
	GLOW_REND_screen_coordinates,
	GLOW_S3_s3tc,
	GLOW_SGIS_detail_texture,
	GLOW_SGIS_fog_function,
	GLOW_SGIS_generate_mipmap,
	GLOW_SGIS_multisample,
	GLOW_SGIS_pixel_texture,
	GLOW_SGIS_point_line_texgen,
	GLOW_SGIS_point_parameters,
	GLOW_SGIS_sharpen_texture,
	GLOW_SGIS_texture4D,
	GLOW_SGIS_texture_border_clamp,
	GLOW_SGIS_texture_color_mask,
	GLOW_SGIS_texture_edge_clamp,
	GLOW_SGIS_texture_filter4,
	GLOW_SGIS_texture_lod,
	GLOW_SGIS_texture_select,
	GLOW_SGIX_async,
	GLOW_SGIX_async_histogram,
	GLOW_SGIX_async_pixel,
	GLOW_SGIX_blend_alpha_minmax,
	GLOW_SGIX_calligraphic_fragment,
	GLOW_SGIX_clipmap,
	GLOW_SGIX_convolution_accuracy,
	GLOW_SGIX_depth_pass_instrument,
	GLOW_SGIX_depth_texture,
	GLOW_SGIX_flush_raster,
	GLOW_SGIX_fog_offset,
	GLOW_SGIX_fragment_lighting,
	GLOW_SGIX_framezoom,
	GLOW_SGIX_igloo_interface,
	GLOW_SGIX_instruments,
	GLOW_SGIX_interlace,
	GLOW_SGIX_ir_instrument1,
	GLOW_SGIX_list_priority,
	GLOW_SGIX_pixel_texture,
	GLOW_SGIX_pixel_tiles,
	GLOW_SGIX_polynomial_ffd,
	GLOW_SGIX_reference_plane,
	GLOW_SGIX_resample,
	GLOW_SGIX_scalebias_hint,
	GLOW_SGIX_shadow,
	GLOW_SGIX_shadow_ambient,
	GLOW_SGIX_sprite,
	GLOW_SGIX_subsample,
	GLOW_SGIX_tag_sample_buffer,
	GLOW_SGIX_texture_add_env,
	GLOW_SGIX_texture_coordinate_clamp,
	GLOW_SGIX_texture_lod_bias,
	GLOW_SGIX_texture_multi_buffer,
	GLOW_SGIX_texture_scale_bias,
	GLOW_SGIX_vertex_preclip,
	GLOW_SGIX_ycrcb,
	GLOW_SGIX_ycrcb_subsample,
	GLOW_SGIX_ycrcba,
	GLOW_SGI_color_matrix,
	GLOW_SGI_color_table,
	GLOW_SGI_texture_color_table,
	GLOW_SUNX_constant_data,
	GLOW_SUN_convolution_border_modes,
	GLOW_SUN_global_alpha,
	GLOW_SUN_mesh_array,
	GLOW_SUN_slice_accum,
	GLOW_SUN_triangle_list,
	GLOW_SUN_vertex,
	GLOW_VIV_shader_binary,
	GLOW_WIN_phong_shading,
	GLOW_WIN_specular_fog,
	GLOW_Unknown_Extension
};

} // namespace glow
