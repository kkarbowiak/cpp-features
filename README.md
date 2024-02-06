# cpp-features

## Language features

| Feature                               | GCC 11.4.0 | GCC 12.3.0 | GCC 13.2.1 | Clang 14.0.0 | Clang 15.0.7 |
|---------------------------------------|------------|------------|------------|--------------|--------------|
| __cpp_aggregate_bases                 | 201603     | 201603     | 201603     | 201603       | 201603       |
| __cpp_aggregate_nsdmi                 | 201304     | 201304     | 201304     | 201304       | 201304       |
| __cpp_aggregate_paren_init            | 201902     | 201902     | 201902     | undefined    | undefined    |
| __cpp_alias_templates                 | 200704     | 200704     | 200704     | 200704       | 200704       |
| __cpp_aligned_new                     | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_attributes                      | 200809     | 200809     | 200809     | 200809       | 200809       |
| __cpp_auto_cast                       | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_binary_literals                 | 201304     | 201304     | 201304     | 201304       | 201304       |
| __cpp_capture_star_this               | 201603     | 201603     | 201603     | 201603       | 201603       |
| __cpp_char                            | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_concepts                        | 201907     | 202002     | 202002     | 201907       | 201907       |
| __cpp_conditional_explicit            | 201806     | 201806     | 201806     | 201806       | 201806       |
| __cpp_consteval                       | 201811     | 201811     | 201811     | undefined    | undefined    |
| __cpp_constexpr                       | 201907     | 202002     | 202002     | 201907       | 201907       |
| __cpp_constexpr_dynamic_alloc         | 201907     | 201907     | 201907     | 201907       | 201907       |
| __cpp_constexpr_in_decltype           | 201711     | 201711     | 201711     | 201711       | 201711       |
| __cpp_constinit                       | 201907     | 201907     | 201907     | 201907       | 201907       |
| __cpp_decltype                        | 200707     | 200707     | 200707     | 200707       | 200707       |
| __cpp_decltype_auto                   | 201304     | 201304     | 201304     | 201304       | 201304       |
| __cpp_deduction_guides                | 201907     | 201907     | 201907     | 201703       | 201703       |
| __cpp_delegating_constructors         | 200604     | 200604     | 200604     | 200604       | 200604       |
| __cpp_designated_initializers         | 201707     | 201707     | 201707     | 201707       | 201707       |
| __cpp_enumerator_attributes           | 201411     | 201411     | 201411     | 201411       | 201411       |
| __cpp_explicit_this_parameter         | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_fold_expressions                | 201603     | 201603     | 201603     | 201603       | 201603       |
| __cpp_generic_lambdas                 | 201707     | 201707     | 201707     | 201707       | 201707       |
| __cpp_guaranteed_copy_elision         | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_hex_float                       | 201603     | 201603     | 201603     | 201603       | 201603       |
| __cpp_if_consteval                    | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_if_constexpr                    | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_impl_coroutine                  | 201902     | 201902     | 201902     | 201902       | 201902       |
| __cpp_impl_destroying_delete          | 201806     | 201806     | 201806     | 201806       | 201806       |
| __cpp_impl_three_way_comparison       | 201907     | 201907     | 201907     | 201907       | 201907       |
| __cpp_implicit_move                   | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_inheriting_constructors         | 201511     | 201511     | 201511     | 201511       | 201511       |
| __cpp_init_captures                   | 201803     | 201803     | 201803     | 201803       | 201803       |
| __cpp_initializer_lists               | 200806     | 200806     | 200806     | 200806       | 200806       |
| __cpp_inline_variables                | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_lambdas                         | 200907     | 200907     | 200907     | 200907       | 200907       |
| __cpp_modules                         | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_multidimensional_subscript      | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_named_character_escapes         | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_namespace_attributes            | 201411     | 201411     | 201411     | 201411       | 201411       |
| __cpp_noexcept_function_type          | 201510     | 201510     | 201510     | 201510       | 201510       |
| __cpp_nontype_template_args           | 201911     | 201911     | 201911     | 201411       | 201411       |
| __cpp_nontype_template_parameter_auto | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_nsdmi                           | 200809     | 200809     | 200809     | 200809       | 200809       |
| __cpp_pack_indexing                   | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_placeholder_variables           | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_range_based_for                 | 201603     | 201603     | 201603     | 201603       | 201603       |
| __cpp_raw_strings                     | 200710     | 200710     | 200710     | 200710       | 200710       |
| __cpp_ref_qualifiers                  | 200710     | 200710     | 200710     | 200710       | 200710       |
| __cpp_return_type_deduction           | 201304     | 201304     | 201304     | 201304       | 201304       |
| __cpp_rvalue_references               | 200610     | 200610     | 200610     | 200610       | 200610       |
| __cpp_size_t_suffix                   | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_sized_deallocation              | 201309     | 201309     | 201309     | undefined    | undefined    |
| __cpp_static_assert                   | 201411     | 201411     | 201411     | 201411       | 201411       |
| __cpp_static_call_operator            | undefined  | undefined  | undefined  | undefined    | undefined    |
| __cpp_structured_bindings             | 201606     | 201606     | 201606     | 201606       | 201606       |
| __cpp_template_template_args          | 201611     | 201611     | 201611     | undefined    | undefined    |
| __cpp_threadsafe_static_init          | 200806     | 200806     | 200806     | 200806       | 200806       |
| __cpp_unicode_characters              | 201411     | 201411     | 201411     | 200704       | 200704       |
| __cpp_unicode_literals                | 200710     | 200710     | 200710     | 200710       | 200710       |
| __cpp_user_defined_literals           | 200809     | 200809     | 200809     | 200809       | 200809       |
| __cpp_using_enum                      | 201907     | 201907     | 201907     | 201907       | 201907       |
| __cpp_variable_templates              | 201304     | 201304     | 201304     | 201304       | 201304       |
| __cpp_variadic_templates              | 200704     | 200704     | 200704     | 200704       | 200704       |
| __cpp_variadic_using                  | 201611     | 201611     | 201611     | 201611       | 201611       |

## Library features

| Feature                                       | GCC 11.4.0 | GCC 12.3.0 | GCC 13.2.1 | Clang 14.0.0 |
|-----------------------------------------------|------------|------------|------------|--------------|
| __cpp_lib_adaptor_iterator_pair_constructor   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_addressof_constexpr                 | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_algorithm_iterator_requirements     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_allocate_at_least                   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_allocator_traits_is_always_equal    | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_any                                 | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_apply                               | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_array_constexpr                     | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_as_const                            | 201510     | 201510     | 201510     | 201510       |
| __cpp_lib_associative_heterogeneous_erasure   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_associative_heterogeneous_insertion | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_assume_aligned                      | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_atomic_flag_test                    | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_atomic_float                        | 201711     | 201711     | 201711     | 201711       |
| __cpp_lib_atomic_is_always_lock_free          | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_atomic_lock_free_type_aliases       | undefined  | undefined  | 201907     | 201907       |
| __cpp_lib_atomic_ref                          | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_atomic_shared_ptr                   | undefined  | 201711     | 201711     | 201711       |
| __cpp_lib_atomic_value_initialization         | 201911     | 201911     | 201911     | 201911       |
| __cpp_lib_atomic_wait                         | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_barrier                             | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_bind_back                           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_bind_front                          | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_bit_cast                            | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_bitops                              | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_bitset                              | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_bool_constant                       | 201505     | 201505     | 201505     | 201505       |
| __cpp_lib_bounded_array_traits                | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_boyer_moore_searcher                | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_byte                                | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_byteswap                            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_char                                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_chrono                              | 201611     | 201611     | 201611     | 201611       |
| __cpp_lib_chrono_udls                         | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_clamp                               | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_common_reference                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_common_reference_wrapper            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_complex_udls                        | 201309     | 201309     | 201309     | 201309       |
| __cpp_lib_concepts                            | 202002     | 202002     | 202002     | 202002       |
| __cpp_lib_constexpr_algorithms                | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_constexpr_bitset                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_constexpr_charconv                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_constexpr_cmath                     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_constexpr_complex                   | 201711     | 201711     | 201711     | 201711       |
| __cpp_lib_constexpr_dynamic_alloc             | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_constexpr_functional                | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_constexpr_iterator                  | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_constexpr_memory                    | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_constexpr_numeric                   | 201911     | 201911     | 201911     | 201911       |
| __cpp_lib_constexpr_string                    | 201811     | 201907     | 201907     | 201907       |
| __cpp_lib_constexpr_string_view               | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_constexpr_tuple                     | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_constexpr_typeinfo                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_constexpr_utility                   | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_constexpr_vector                    | undefined  | 201907     | 201907     | 201907       |
| __cpp_lib_containers_ranges                   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_copyable_function                   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_coroutine                           | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_debugging                           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_destroying_delete                   | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_enable_shared_from_this             | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_endian                              | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_erase_if                            | 202002     | 202002     | 202002     | 202002       |
| __cpp_lib_exchange_function                   | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_execution                           | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_expected                            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_filesystem                          | 201703     | 201703     | 201703     | 201703       |
| __cpp_lib_flat_map                            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_flat_set                            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_format                              | undefined  | undefined  | 202106     | 202106       |
| __cpp_lib_format_ranges                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_format_uchar                        | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_formatters                          | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_forward_like                        | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_algorithm              | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_array                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_char_traits            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_charconv               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_cstdlib                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_cstring                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_cwchar                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_errc                   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_expected               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_feature_test_macros    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_functional             | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_iterator               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_mdspan                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_memory                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_numeric                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_operator_new           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_optional               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_ranges                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_ratio                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_string_view            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_tuple                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_utility                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_freestanding_variant                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_fstream_native_handle               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_function_ref                        | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_gcd_lcm                             | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_generator                           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_generic_associative_lookup          | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_generic_unordered_lookup            | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_hardware_interference_size          | undefined  | 201703     | 201703     | undefined    |
| __cpp_lib_has_unique_object_representations   | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_hazard_pointer                      | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_hypot                               | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_incomplete_container_elements       | 201505     | 201505     | 201505     | 201505       |
| __cpp_lib_int_pow                             | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_integer_comparison_functions        | 202002     | 202002     | 202002     | 202002       |
| __cpp_lib_integer_sequence                    | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_integral_constant_callable          | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_interpolate                         | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_invoke                              | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_invoke_r                            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ios_noreplace                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_is_aggregate                        | 201703     | 201703     | 201703     | 201703       |
| __cpp_lib_is_constant_evaluated               | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_is_final                            | 201402     | 201402     | 201402     | 201402       |
| __cpp_lib_is_implicit_lifetime                | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_is_invocable                        | 201703     | 201703     | 201703     | 201703       |
| __cpp_lib_is_layout_compatible                | undefined  | 201907     | 201907     | undefined    |
| __cpp_lib_is_nothrow_convertible              | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_is_null_pointer                     | 201309     | 201309     | 201309     | 201309       |
| __cpp_lib_is_pointer_interconvertible         | undefined  | 201907     | 201907     | undefined    |
| __cpp_lib_is_scoped_enum                      | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_is_swappable                        | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_is_within_lifetime                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_jthread                             | 201911     | 201911     | 201911     | 201911       |
| __cpp_lib_latch                               | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_launder                             | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_linalg                              | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_list_remove_return_type             | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_logical_traits                      | 201510     | 201510     | 201510     | 201510       |
| __cpp_lib_make_from_tuple                     | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_make_reverse_iterator               | 201402     | 201402     | 201402     | 201402       |
| __cpp_lib_make_unique                         | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_map_try_emplace                     | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_math_constants                      | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_math_special_functions              | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_mdspan                              | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_memory_resource                     | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_modules                             | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_move_iterator_concept               | 202207     | 202207     | 202207     | 202207       |
| __cpp_lib_move_only_function                  | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_node_extract                        | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_nonmember_container_access          | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_not_fn                              | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_null_iterators                      | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_optional                            | 202106     | 202106     | 202106     | 202106       |
| __cpp_lib_out_ptr                             | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_parallel_algorithm                  | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_polymorphic_allocator               | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_print                               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_quoted_string_io                    | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_ranges                              | 202106     | 202110     | 202110     | 202110       |
| __cpp_lib_ranges_as_const                     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_as_rvalue                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_cartesian_product            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_chunk                        | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_chunk_by                     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_contains                     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_enumerate                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_find_last                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_fold                         | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_iota                         | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_join_with                    | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_repeat                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_slide                        | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_starts_ends_with             | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_stride                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_to_container                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ranges_zip                          | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ratio                               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_raw_memory_algorithms               | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_rcu                                 | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_reference_from_temporary            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_remove_cvref                        | 201711     | 201711     | 201711     | 201711       |
| __cpp_lib_result_of_sfinae                    | 201210     | 201210     | 201210     | 201210       |
| __cpp_lib_robust_nonmodifying_seq_ops         | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_sample                              | 201603     | 201603     | 201603     | 201603       |
| __cpp_lib_saturation_arithmetic               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_scoped_lock                         | 201703     | 201703     | 201703     | 201703       |
| __cpp_lib_semaphore                           | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_shared_mutex                        | 201505     | 201505     | 201505     | 201505       |
| __cpp_lib_shared_ptr_arrays                   | 201611     | 201707     | 201707     | 201707       |
| __cpp_lib_shared_ptr_weak_type                | 201606     | 201606     | 201606     | 201606       |
| __cpp_lib_shared_timed_mutex                  | 201402     | 201402     | 201402     | 201402       |
| __cpp_lib_shift                               | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_smart_ptr_for_overwrite             | undefined  | 202002     | 202002     | 202002       |
| __cpp_lib_smart_ptr_owner_equality            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_source_location                     | 201907     | 201907     | 201907     | undefined    |
| __cpp_lib_span                                | 202002     | 202002     | 202002     | 202002       |
| __cpp_lib_span_initializer_list               | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_spanstream                          | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_ssize                               | 201902     | 201902     | 201902     | 201902       |
| __cpp_lib_sstream_from_string_view            | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_stacktrace                          | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_start_lifetime_as                   | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_starts_ends_with                    | 201711     | 201711     | 201711     | 201711       |
| __cpp_lib_stdatomic_h                         | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_string_contains                     | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_string_resize_and_overwrite         | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_string_udls                         | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_string_view                         | 201803     | 201803     | 201803     | 201803       |
| __cpp_lib_submdspan                           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_syncbuf                             | 201803     | 201803     | 201803     | 201803       |
| __cpp_lib_text_encoding                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_three_way_comparison                | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_to_address                          | 201711     | 201711     | 201711     | 201711       |
| __cpp_lib_to_array                            | 201907     | 201907     | 201907     | 201907       |
| __cpp_lib_to_chars                            | 201611     | 201611     | 201611     | 201611       |
| __cpp_lib_to_string                           | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_to_underlying                       | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_transformation_trait_aliases        | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_transparent_operators               | 201510     | 201510     | 201510     | 201510       |
| __cpp_lib_tuple_element_t                     | 201402     | 201402     | 201402     | 201402       |
| __cpp_lib_tuple_like                          | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_tuples_by_type                      | 201304     | 201304     | 201304     | 201304       |
| __cpp_lib_type_identity                       | 201806     | 201806     | 201806     | 201806       |
| __cpp_lib_type_trait_variable_templates       | 201510     | 201510     | 201510     | 201510       |
| __cpp_lib_uncaught_exceptions                 | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_unordered_map_try_emplace           | 201411     | 201411     | 201411     | 201411       |
| __cpp_lib_unreachable                         | undefined  | undefined  | undefined  | undefined    |
| __cpp_lib_unwrap_ref                          | 201811     | 201811     | 201811     | 201811       |
| __cpp_lib_variant                             | 202102     | 202106     | 202106     | 202102       |
| __cpp_lib_void_t                              | 201411     | 201411     | 201411     | 201411       |
