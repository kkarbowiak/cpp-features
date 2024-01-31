#include <iostream>
#include <version>


int main()
{
    /*
    All the macros listed below are based on the tables at
    https://en.cppreference.com/w/cpp/feature_test
    */

    std::cout << "Language features:\n";

    #if defined(__cpp_aggregate_bases)
    std::cout << "    __cpp_aggregate_bases : " << __cpp_aggregate_bases << '\n';
    #else
    std::cout << "    __cpp_aggregate_bases : undefined\n";
    #endif

    #if defined(__cpp_aggregate_nsdmi)
    std::cout << "    __cpp_aggregate_nsdmi : " << __cpp_aggregate_nsdmi << '\n';
    #else
    std::cout << "    __cpp_aggregate_nsdmi : undefined\n";
    #endif

    #if defined(__cpp_aggregate_paren_init)
    std::cout << "    __cpp_aggregate_paren_init : " << __cpp_aggregate_paren_init << '\n';
    #else
    std::cout << "    __cpp_aggregate_paren_init : undefined\n";
    #endif

    #if defined(__cpp_alias_templates)
    std::cout << "    __cpp_alias_templates : " << __cpp_alias_templates << '\n';
    #else
    std::cout << "    __cpp_alias_templates : undefined\n";
    #endif

    #if defined(__cpp_aligned_new)
    std::cout << "    __cpp_aligned_new : " << __cpp_aligned_new << '\n';
    #else
    std::cout << "    __cpp_aligned_new : undefined\n";
    #endif

    #if defined(__cpp_attributes)
    std::cout << "    __cpp_attributes : " << __cpp_attributes << '\n';
    #else
    std::cout << "    __cpp_attributes : undefined\n";
    #endif

    #if defined(__cpp_auto_cast)
    std::cout << "    __cpp_auto_cast : " << __cpp_auto_cast << '\n';
    #else
    std::cout << "    __cpp_auto_cast : undefined\n";
    #endif

    #if defined(__cpp_binary_literals)
    std::cout << "    __cpp_binary_literals : " << __cpp_binary_literals << '\n';
    #else
    std::cout << "    __cpp_binary_literals : undefined\n";
    #endif

    #if defined(__cpp_capture_star_this)
    std::cout << "    __cpp_capture_star_this : " << __cpp_capture_star_this << '\n';
    #else
    std::cout << "    __cpp_capture_star_this : undefined\n";
    #endif

    #if defined(__cpp_char)
    std::cout << "    __cpp_char : " << __cpp_char << '\n';
    #else
    std::cout << "    __cpp_char : undefined\n";
    #endif

    #if defined(__cpp_concepts)
    std::cout << "    __cpp_concepts : " << __cpp_concepts << '\n';
    #else
    std::cout << "    __cpp_concepts : undefined\n";
    #endif

    #if defined(__cpp_conditional_explicit)
    std::cout << "    __cpp_conditional_explicit : " << __cpp_conditional_explicit << '\n';
    #else
    std::cout << "    __cpp_conditional_explicit : undefined\n";
    #endif

    #if defined(__cpp_consteval)
    std::cout << "    __cpp_consteval : " << __cpp_consteval << '\n';
    #else
    std::cout << "    __cpp_consteval : undefined\n";
    #endif

    #if defined(__cpp_constexpr)
    std::cout << "    __cpp_constexpr : " << __cpp_constexpr << '\n';
    #else
    std::cout << "    __cpp_constexpr : undefined\n";
    #endif

    #if defined(__cpp_constexpr_dynamic_alloc)
    std::cout << "    __cpp_constexpr_dynamic_alloc : " << __cpp_constexpr_dynamic_alloc << '\n';
    #else
    std::cout << "    __cpp_constexpr_dynamic_alloc : undefined\n";
    #endif

    #if defined(__cpp_constexpr_in_decltype)
    std::cout << "    __cpp_constexpr_in_decltype : " << __cpp_constexpr_in_decltype << '\n';
    #else
    std::cout << "    __cpp_constexpr_in_decltype : undefined\n";
    #endif

    #if defined(__cpp_constinit)
    std::cout << "    __cpp_constinit : " << __cpp_constinit << '\n';
    #else
    std::cout << "    __cpp_constinit : undefined\n";
    #endif

    #if defined(__cpp_decltype)
    std::cout << "    __cpp_decltype : " << __cpp_decltype << '\n';
    #else
    std::cout << "    __cpp_decltype : undefined\n";
    #endif

    #if defined(__cpp_decltype_auto)
    std::cout << "    __cpp_decltype_auto : " << __cpp_decltype_auto << '\n';
    #else
    std::cout << "    __cpp_decltype_auto : undefined\n";
    #endif

    #if defined(__cpp_deduction_guides)
    std::cout << "    __cpp_deduction_guides : " << __cpp_deduction_guides << '\n';
    #else
    std::cout << "    __cpp_deduction_guides : undefined\n";
    #endif

    #if defined(__cpp_delegating_constructors)
    std::cout << "    __cpp_delegating_constructors : " << __cpp_delegating_constructors << '\n';
    #else
    std::cout << "    __cpp_delegating_constructors : undefined\n";
    #endif

    #if defined(__cpp_designated_initializers)
    std::cout << "    __cpp_designated_initializers : " << __cpp_designated_initializers << '\n';
    #else
    std::cout << "    __cpp_designated_initializers : undefined\n";
    #endif

    #if defined(__cpp_enumerator_attributes)
    std::cout << "    __cpp_enumerator_attributes : " << __cpp_enumerator_attributes << '\n';
    #else
    std::cout << "    __cpp_enumerator_attributes : undefined\n";
    #endif

    #if defined(__cpp_explicit_this_parameter)
    std::cout << "    __cpp_explicit_this_parameter : " << __cpp_explicit_this_parameter << '\n';
    #else
    std::cout << "    __cpp_explicit_this_parameter : undefined\n";
    #endif

    #if defined(__cpp_fold_expressions)
    std::cout << "    __cpp_fold_expressions : " << __cpp_fold_expressions << '\n';
    #else
    std::cout << "    __cpp_fold_expressions : undefined\n";
    #endif

    #if defined(__cpp_generic_lambdas)
    std::cout << "    __cpp_generic_lambdas : " << __cpp_generic_lambdas << '\n';
    #else
    std::cout << "    __cpp_generic_lambdas : undefined\n";
    #endif

    #if defined(__cpp_guaranteed_copy_elision)
    std::cout << "    __cpp_guaranteed_copy_elision : " << __cpp_guaranteed_copy_elision << '\n';
    #else
    std::cout << "    __cpp_guaranteed_copy_elision : undefined\n";
    #endif

    #if defined(__cpp_hex_float)
    std::cout << "    __cpp_hex_float : " << __cpp_hex_float << '\n';
    #else
    std::cout << "    __cpp_hex_float : undefined\n";
    #endif

    #if defined(__cpp_if_consteval)
    std::cout << "    __cpp_if_consteval : " << __cpp_if_consteval << '\n';
    #else
    std::cout << "    __cpp_if_consteval : undefined\n";
    #endif

    #if defined(__cpp_if_constexpr)
    std::cout << "    __cpp_if_constexpr : " << __cpp_if_constexpr << '\n';
    #else
    std::cout << "    __cpp_if_constexpr : undefined\n";
    #endif

    #if defined(__cpp_impl_coroutine)
    std::cout << "    __cpp_impl_coroutine : " << __cpp_impl_coroutine << '\n';
    #else
    std::cout << "    __cpp_impl_coroutine : undefined\n";
    #endif

    #if defined(__cpp_impl_destroying_delete)
    std::cout << "    __cpp_impl_destroying_delete : " << __cpp_impl_destroying_delete << '\n';
    #else
    std::cout << "    __cpp_impl_destroying_delete : undefined\n";
    #endif

    #if defined(__cpp_impl_three_way_comparison)
    std::cout << "    __cpp_impl_three_way_comparison : " << __cpp_impl_three_way_comparison << '\n';
    #else
    std::cout << "    __cpp_impl_three_way_comparison : undefined\n";
    #endif

    #if defined(__cpp_implicit_move)
    std::cout << "    __cpp_implicit_move : " << __cpp_implicit_move << '\n';
    #else
    std::cout << "    __cpp_implicit_move : undefined\n";
    #endif

    #if defined(__cpp_inheriting_constructors)
    std::cout << "    __cpp_inheriting_constructors : " << __cpp_inheriting_constructors << '\n';
    #else
    std::cout << "    __cpp_inheriting_constructors : undefined\n";
    #endif

    #if defined(__cpp_init_captures)
    std::cout << "    __cpp_init_captures : " << __cpp_init_captures << '\n';
    #else
    std::cout << "    __cpp_init_captures : undefined\n";
    #endif

    #if defined(__cpp_initializer_lists)
    std::cout << "    __cpp_initializer_lists : " << __cpp_initializer_lists << '\n';
    #else
    std::cout << "    __cpp_initializer_lists : undefined\n";
    #endif

    #if defined(__cpp_inline_variables)
    std::cout << "    __cpp_inline_variables : " << __cpp_inline_variables << '\n';
    #else
    std::cout << "    __cpp_inline_variables : undefined\n";
    #endif

    #if defined(__cpp_lambdas)
    std::cout << "    __cpp_lambdas : " << __cpp_lambdas << '\n';
    #else
    std::cout << "    __cpp_lambdas : undefined\n";
    #endif

    #if defined(__cpp_modules)
    std::cout << "    __cpp_modules : " << __cpp_modules << '\n';
    #else
    std::cout << "    __cpp_modules : undefined\n";
    #endif

    #if defined(__cpp_multidimensional_subscript)
    std::cout << "    __cpp_multidimensional_subscript : " << __cpp_multidimensional_subscript << '\n';
    #else
    std::cout << "    __cpp_multidimensional_subscript : undefined\n";
    #endif

    #if defined(__cpp_named_character_escapes)
    std::cout << "    __cpp_named_character_escapes : " << __cpp_named_character_escapes << '\n';
    #else
    std::cout << "    __cpp_named_character_escapes : undefined\n";
    #endif

    #if defined(__cpp_namespace_attributes)
    std::cout << "    __cpp_namespace_attributes : " << __cpp_namespace_attributes << '\n';
    #else
    std::cout << "    __cpp_namespace_attributes : undefined\n";
    #endif

    #if defined(__cpp_noexcept_function_type)
    std::cout << "    __cpp_noexcept_function_type : " << __cpp_noexcept_function_type << '\n';
    #else
    std::cout << "    __cpp_noexcept_function_type : undefined\n";
    #endif

    #if defined(__cpp_nontype_template_args)
    std::cout << "    __cpp_nontype_template_args : " << __cpp_nontype_template_args << '\n';
    #else
    std::cout << "    __cpp_nontype_template_args : undefined\n";
    #endif

    #if defined(__cpp_nontype_template_parameter_auto)
    std::cout << "    __cpp_nontype_template_parameter_auto : " << __cpp_nontype_template_parameter_auto << '\n';
    #else
    std::cout << "    __cpp_nontype_template_parameter_auto : undefined\n";
    #endif

    #if defined(__cpp_nsdmi)
    std::cout << "    __cpp_nsdmi : " << __cpp_nsdmi << '\n';
    #else
    std::cout << "    __cpp_nsdmi : undefined\n";
    #endif

    #if defined(__cpp_pack_indexing)
    std::cout << "    __cpp_pack_indexing : " << __cpp_pack_indexing << '\n';
    #else
    std::cout << "    __cpp_pack_indexing : undefined\n";
    #endif

    #if defined(__cpp_placeholder_variables)
    std::cout << "    __cpp_placeholder_variables : " << __cpp_placeholder_variables << '\n';
    #else
    std::cout << "    __cpp_placeholder_variables : undefined\n";
    #endif

    #if defined(__cpp_range_based_for)
    std::cout << "    __cpp_range_based_for : " << __cpp_range_based_for << '\n';
    #else
    std::cout << "    __cpp_range_based_for : undefined\n";
    #endif

    #if defined(__cpp_raw_strings)
    std::cout << "    __cpp_raw_strings : " << __cpp_raw_strings << '\n';
    #else
    std::cout << "    __cpp_raw_strings : undefined\n";
    #endif

    #if defined(__cpp_ref_qualifiers)
    std::cout << "    __cpp_ref_qualifiers : " << __cpp_ref_qualifiers << '\n';
    #else
    std::cout << "    __cpp_ref_qualifiers : undefined\n";
    #endif

    #if defined(__cpp_return_type_deduction)
    std::cout << "    __cpp_return_type_deduction : " << __cpp_return_type_deduction << '\n';
    #else
    std::cout << "    __cpp_return_type_deduction : undefined\n";
    #endif

    #if defined(__cpp_rvalue_references)
    std::cout << "    __cpp_rvalue_references : " << __cpp_rvalue_references << '\n';
    #else
    std::cout << "    __cpp_rvalue_references : undefined\n";
    #endif

    #if defined(__cpp_size_t_suffix)
    std::cout << "    __cpp_size_t_suffix : " << __cpp_size_t_suffix << '\n';
    #else
    std::cout << "    __cpp_size_t_suffix : undefined\n";
    #endif

    #if defined(__cpp_sized_deallocation)
    std::cout << "    __cpp_sized_deallocation : " << __cpp_sized_deallocation << '\n';
    #else
    std::cout << "    __cpp_sized_deallocation : undefined\n";
    #endif

    #if defined(__cpp_static_assert)
    std::cout << "    __cpp_static_assert : " << __cpp_static_assert << '\n';
    #else
    std::cout << "    __cpp_static_assert : undefined\n";
    #endif

    #if defined(__cpp_static_call_operator)
    std::cout << "    __cpp_static_call_operator : " << __cpp_static_call_operator << '\n';
    #else
    std::cout << "    __cpp_static_call_operator : undefined\n";
    #endif

    #if defined(__cpp_structured_bindings)
    std::cout << "    __cpp_structured_bindings : " << __cpp_structured_bindings << '\n';
    #else
    std::cout << "    __cpp_structured_bindings : undefined\n";
    #endif

    #if defined(__cpp_template_template_args)
    std::cout << "    __cpp_template_template_args : " << __cpp_template_template_args << '\n';
    #else
    std::cout << "    __cpp_template_template_args : undefined\n";
    #endif

    #if defined(__cpp_threadsafe_static_init)
    std::cout << "    __cpp_threadsafe_static_init : " << __cpp_threadsafe_static_init << '\n';
    #else
    std::cout << "    __cpp_threadsafe_static_init : undefined\n";
    #endif

    #if defined(__cpp_unicode_characters)
    std::cout << "    __cpp_unicode_characters : " << __cpp_unicode_characters << '\n';
    #else
    std::cout << "    __cpp_unicode_characters : undefined\n";
    #endif

    #if defined(__cpp_unicode_literals)
    std::cout << "    __cpp_unicode_literals : " << __cpp_unicode_literals << '\n';
    #else
    std::cout << "    __cpp_unicode_literals : undefined\n";
    #endif

    #if defined(__cpp_user_defined_literals)
    std::cout << "    __cpp_user_defined_literals : " << __cpp_user_defined_literals << '\n';
    #else
    std::cout << "    __cpp_user_defined_literals : undefined\n";
    #endif

    #if defined(__cpp_using_enum)
    std::cout << "    __cpp_using_enum : " << __cpp_using_enum << '\n';
    #else
    std::cout << "    __cpp_using_enum : undefined\n";
    #endif

    #if defined(__cpp_variable_templates)
    std::cout << "    __cpp_variable_templates : " << __cpp_variable_templates << '\n';
    #else
    std::cout << "    __cpp_variable_templates : undefined\n";
    #endif

    #if defined(__cpp_variadic_templates)
    std::cout << "    __cpp_variadic_templates : " << __cpp_variadic_templates << '\n';
    #else
    std::cout << "    __cpp_variadic_templates : undefined\n";
    #endif

    #if defined(__cpp_variadic_using)
    std::cout << "    __cpp_variadic_using : " << __cpp_variadic_using << '\n';
    #else
    std::cout << "    __cpp_variadic_using : undefined\n";
    #endif

    std::cout << "Library features:\n";

    #if defined(__cpp_lib_adaptor_iterator_pair_constructor)
    std::cout << "    __cpp_lib_adaptor_iterator_pair_constructor : " << __cpp_lib_adaptor_iterator_pair_constructor << '\n';
    #else
    std::cout << "    __cpp_lib_adaptor_iterator_pair_constructor : undefined\n";
    #endif

    #if defined(__cpp_lib_addressof_constexpr)
    std::cout << "    __cpp_lib_addressof_constexpr : " << __cpp_lib_addressof_constexpr << '\n';
    #else
    std::cout << "    __cpp_lib_addressof_constexpr : undefined\n";
    #endif

    #if defined(__cpp_lib_algorithm_iterator_requirements)
    std::cout << "    __cpp_lib_algorithm_iterator_requirements : " << __cpp_lib_algorithm_iterator_requirements << '\n';
    #else
    std::cout << "    __cpp_lib_algorithm_iterator_requirements : undefined\n";
    #endif

    #if defined(__cpp_lib_allocate_at_least)
    std::cout << "    __cpp_lib_allocate_at_least : " << __cpp_lib_allocate_at_least << '\n';
    #else
    std::cout << "    __cpp_lib_allocate_at_least : undefined\n";
    #endif

    #if defined(__cpp_lib_allocator_traits_is_always_equal)
    std::cout << "    __cpp_lib_allocator_traits_is_always_equal : " << __cpp_lib_allocator_traits_is_always_equal << '\n';
    #else
    std::cout << "    __cpp_lib_allocator_traits_is_always_equal : undefined\n";
    #endif

    #if defined(__cpp_lib_any)
    std::cout << "    __cpp_lib_any : " << __cpp_lib_any << '\n';
    #else
    std::cout << "    __cpp_lib_any : undefined\n";
    #endif

    #if defined(__cpp_lib_apply)
    std::cout << "    __cpp_lib_apply : " << __cpp_lib_apply << '\n';
    #else
    std::cout << "    __cpp_lib_apply : undefined\n";
    #endif

    #if defined(__cpp_lib_array_constexpr)
    std::cout << "    __cpp_lib_array_constexpr : " << __cpp_lib_array_constexpr << '\n';
    #else
    std::cout << "    __cpp_lib_array_constexpr : undefined\n";
    #endif

    #if defined(__cpp_lib_as_const)
    std::cout << "    __cpp_lib_as_const : " << __cpp_lib_as_const << '\n';
    #else
    std::cout << "    __cpp_lib_as_const : undefined\n";
    #endif

    #if defined(__cpp_lib_associative_heterogeneous_erasure)
    std::cout << "    __cpp_lib_associative_heterogeneous_erasure : " << __cpp_lib_associative_heterogeneous_erasure << '\n';
    #else
    std::cout << "    __cpp_lib_associative_heterogeneous_erasure : undefined\n";
    #endif

    #if defined(__cpp_lib_associative_heterogeneous_insertion)
    std::cout << "    __cpp_lib_associative_heterogeneous_insertion : " << __cpp_lib_associative_heterogeneous_insertion << '\n';
    #else
    std::cout << "    __cpp_lib_associative_heterogeneous_insertion : undefined\n";
    #endif

    #if defined(__cpp_lib_assume_aligned)
    std::cout << "    __cpp_lib_assume_aligned : " << __cpp_lib_assume_aligned << '\n';
    #else
    std::cout << "    __cpp_lib_assume_aligned : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_flag_test)
    std::cout << "    __cpp_lib_atomic_flag_test : " << __cpp_lib_atomic_flag_test << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_flag_test : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_float)
    std::cout << "    __cpp_lib_atomic_float : " << __cpp_lib_atomic_float << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_float : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_is_always_lock_free)
    std::cout << "    __cpp_lib_atomic_is_always_lock_free : " << __cpp_lib_atomic_is_always_lock_free << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_is_always_lock_free : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_lock_free_type_aliases)
    std::cout << "    __cpp_lib_atomic_lock_free_type_aliases : " << __cpp_lib_atomic_lock_free_type_aliases << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_lock_free_type_aliases : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_ref)
    std::cout << "    __cpp_lib_atomic_ref : " << __cpp_lib_atomic_ref << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_ref : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_shared_ptr)
    std::cout << "    __cpp_lib_atomic_shared_ptr : " << __cpp_lib_atomic_shared_ptr << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_shared_ptr : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_value_initialization)
    std::cout << "    __cpp_lib_atomic_value_initialization : " << __cpp_lib_atomic_value_initialization << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_value_initialization : undefined\n";
    #endif

    #if defined(__cpp_lib_atomic_wait)
    std::cout << "    __cpp_lib_atomic_wait : " << __cpp_lib_atomic_wait << '\n';
    #else
    std::cout << "    __cpp_lib_atomic_wait : undefined\n";
    #endif

    #if defined(__cpp_lib_barrier)
    std::cout << "    __cpp_lib_barrier : " << __cpp_lib_barrier << '\n';
    #else
    std::cout << "    __cpp_lib_barrier : undefined\n";
    #endif

    #if defined(__cpp_lib_bind_back)
    std::cout << "    __cpp_lib_bind_back : " << __cpp_lib_bind_back << '\n';
    #else
    std::cout << "    __cpp_lib_bind_back : undefined\n";
    #endif

    #if defined(__cpp_lib_bind_front)
    std::cout << "    __cpp_lib_bind_front : " << __cpp_lib_bind_front << '\n';
    #else
    std::cout << "    __cpp_lib_bind_front : undefined\n";
    #endif

    #if defined(__cpp_lib_bit_cast)
    std::cout << "    __cpp_lib_bit_cast : " << __cpp_lib_bit_cast << '\n';
    #else
    std::cout << "    __cpp_lib_bit_cast : undefined\n";
    #endif

    #if defined(__cpp_lib_bitops)
    std::cout << "    __cpp_lib_bitops : " << __cpp_lib_bitops << '\n';
    #else
    std::cout << "    __cpp_lib_bitops : undefined\n";
    #endif

    #if defined(__cpp_lib_bitset)
    std::cout << "    __cpp_lib_bitset : " << __cpp_lib_bitset << '\n';
    #else
    std::cout << "    __cpp_lib_bitset : undefined\n";
    #endif

    #if defined(__cpp_lib_bool_constant)
    std::cout << "    __cpp_lib_bool_constant : " << __cpp_lib_bool_constant << '\n';
    #else
    std::cout << "    __cpp_lib_bool_constant : undefined\n";
    #endif

    #if defined(__cpp_lib_bounded_array_traits)
    std::cout << "    __cpp_lib_bounded_array_traits : " << __cpp_lib_bounded_array_traits << '\n';
    #else
    std::cout << "    __cpp_lib_bounded_array_traits : undefined\n";
    #endif

    #if defined(__cpp_lib_boyer_moore_searcher)
    std::cout << "    __cpp_lib_boyer_moore_searcher : " << __cpp_lib_boyer_moore_searcher << '\n';
    #else
    std::cout << "    __cpp_lib_boyer_moore_searcher : undefined\n";
    #endif

    #if defined(__cpp_lib_byte)
    std::cout << "    __cpp_lib_byte : " << __cpp_lib_byte << '\n';
    #else
    std::cout << "    __cpp_lib_byte : undefined\n";
    #endif

    #if defined(__cpp_lib_byteswap)
    std::cout << "    __cpp_lib_byteswap : " << __cpp_lib_byteswap << '\n';
    #else
    std::cout << "    __cpp_lib_byteswap : undefined\n";
    #endif

    #if defined(__cpp_lib_char)
    std::cout << "    __cpp_lib_char : " << __cpp_lib_char << '\n';
    #else
    std::cout << "    __cpp_lib_char : undefined\n";
    #endif

    #if defined(__cpp_lib_chrono)
    std::cout << "    __cpp_lib_chrono : " << __cpp_lib_chrono << '\n';
    #else
    std::cout << "    __cpp_lib_chrono : undefined\n";
    #endif

    #if defined(__cpp_lib_chrono_udls)
    std::cout << "    __cpp_lib_chrono_udls : " << __cpp_lib_chrono_udls << '\n';
    #else
    std::cout << "    __cpp_lib_chrono_udls : undefined\n";
    #endif

    #if defined(__cpp_lib_clamp)
    std::cout << "    __cpp_lib_clamp : " << __cpp_lib_clamp << '\n';
    #else
    std::cout << "    __cpp_lib_clamp : undefined\n";
    #endif

    #if defined(__cpp_lib_common_reference)
    std::cout << "    __cpp_lib_common_reference : " << __cpp_lib_common_reference << '\n';
    #else
    std::cout << "    __cpp_lib_common_reference : undefined\n";
    #endif

    #if defined(__cpp_lib_common_reference_wrapper)
    std::cout << "    __cpp_lib_common_reference_wrapper : " << __cpp_lib_common_reference_wrapper << '\n';
    #else
    std::cout << "    __cpp_lib_common_reference_wrapper : undefined\n";
    #endif

    #if defined(__cpp_lib_complex_udls)
    std::cout << "    __cpp_lib_complex_udls : " << __cpp_lib_complex_udls << '\n';
    #else
    std::cout << "    __cpp_lib_complex_udls : undefined\n";
    #endif

    #if defined(__cpp_lib_concepts)
    std::cout << "    __cpp_lib_concepts : " << __cpp_lib_concepts << '\n';
    #else
    std::cout << "    __cpp_lib_concepts : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_algorithms)
    std::cout << "    __cpp_lib_constexpr_algorithms : " << __cpp_lib_constexpr_algorithms << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_algorithms : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_bitset)
    std::cout << "    __cpp_lib_constexpr_bitset : " << __cpp_lib_constexpr_bitset << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_bitset : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_charconv)
    std::cout << "    __cpp_lib_constexpr_charconv : " << __cpp_lib_constexpr_charconv << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_charconv : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_cmath)
    std::cout << "    __cpp_lib_constexpr_cmath : " << __cpp_lib_constexpr_cmath << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_cmath : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_complex)
    std::cout << "    __cpp_lib_constexpr_complex : " << __cpp_lib_constexpr_complex << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_complex : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_dynamic_alloc)
    std::cout << "    __cpp_lib_constexpr_dynamic_alloc : " << __cpp_lib_constexpr_dynamic_alloc << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_dynamic_alloc : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_functional)
    std::cout << "    __cpp_lib_constexpr_functional : " << __cpp_lib_constexpr_functional << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_functional : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_iterator)
    std::cout << "    __cpp_lib_constexpr_iterator : " << __cpp_lib_constexpr_iterator << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_iterator : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_memory)
    std::cout << "    __cpp_lib_constexpr_memory : " << __cpp_lib_constexpr_memory << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_memory : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_numeric)
    std::cout << "    __cpp_lib_constexpr_numeric : " << __cpp_lib_constexpr_numeric << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_numeric : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_string)
    std::cout << "    __cpp_lib_constexpr_string : " << __cpp_lib_constexpr_string << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_string : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_string_view)
    std::cout << "    __cpp_lib_constexpr_string_view : " << __cpp_lib_constexpr_string_view << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_string_view : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_tuple)
    std::cout << "    __cpp_lib_constexpr_tuple : " << __cpp_lib_constexpr_tuple << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_tuple : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_typeinfo)
    std::cout << "    __cpp_lib_constexpr_typeinfo : " << __cpp_lib_constexpr_typeinfo << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_typeinfo : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_utility)
    std::cout << "    __cpp_lib_constexpr_utility : " << __cpp_lib_constexpr_utility << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_utility : undefined\n";
    #endif

    #if defined(__cpp_lib_constexpr_vector)
    std::cout << "    __cpp_lib_constexpr_vector : " << __cpp_lib_constexpr_vector << '\n';
    #else
    std::cout << "    __cpp_lib_constexpr_vector : undefined\n";
    #endif

    #if defined(__cpp_lib_containers_ranges)
    std::cout << "    __cpp_lib_containers_ranges : " << __cpp_lib_containers_ranges << '\n';
    #else
    std::cout << "    __cpp_lib_containers_ranges : undefined\n";
    #endif

    #if defined(__cpp_lib_copyable_function)
    std::cout << "    __cpp_lib_copyable_function : " << __cpp_lib_copyable_function << '\n';
    #else
    std::cout << "    __cpp_lib_copyable_function : undefined\n";
    #endif

    #if defined(__cpp_lib_coroutine)
    std::cout << "    __cpp_lib_coroutine : " << __cpp_lib_coroutine << '\n';
    #else
    std::cout << "    __cpp_lib_coroutine : undefined\n";
    #endif

    #if defined(__cpp_lib_debugging)
    std::cout << "    __cpp_lib_debugging : " << __cpp_lib_debugging << '\n';
    #else
    std::cout << "    __cpp_lib_debugging : undefined\n";
    #endif

    #if defined(__cpp_lib_destroying_delete)
    std::cout << "    __cpp_lib_destroying_delete : " << __cpp_lib_destroying_delete << '\n';
    #else
    std::cout << "    __cpp_lib_destroying_delete : undefined\n";
    #endif

    #if defined(__cpp_lib_enable_shared_from_this)
    std::cout << "    __cpp_lib_enable_shared_from_this : " << __cpp_lib_enable_shared_from_this << '\n';
    #else
    std::cout << "    __cpp_lib_enable_shared_from_this : undefined\n";
    #endif

    #if defined(__cpp_lib_endian)
    std::cout << "    __cpp_lib_endian : " << __cpp_lib_endian << '\n';
    #else
    std::cout << "    __cpp_lib_endian : undefined\n";
    #endif

    #if defined(__cpp_lib_erase_if)
    std::cout << "    __cpp_lib_erase_if : " << __cpp_lib_erase_if << '\n';
    #else
    std::cout << "    __cpp_lib_erase_if : undefined\n";
    #endif

    #if defined(__cpp_lib_exchange_function)
    std::cout << "    __cpp_lib_exchange_function : " << __cpp_lib_exchange_function << '\n';
    #else
    std::cout << "    __cpp_lib_exchange_function : undefined\n";
    #endif

    #if defined(__cpp_lib_execution)
    std::cout << "    __cpp_lib_execution : " << __cpp_lib_execution << '\n';
    #else
    std::cout << "    __cpp_lib_execution : undefined\n";
    #endif

    #if defined(__cpp_lib_expected)
    std::cout << "    __cpp_lib_expected : " << __cpp_lib_expected << '\n';
    #else
    std::cout << "    __cpp_lib_expected : undefined\n";
    #endif

    #if defined(__cpp_lib_filesystem)
    std::cout << "    __cpp_lib_filesystem : " << __cpp_lib_filesystem << '\n';
    #else
    std::cout << "    __cpp_lib_filesystem : undefined\n";
    #endif

    #if defined(__cpp_lib_flat_map)
    std::cout << "    __cpp_lib_flat_map : " << __cpp_lib_flat_map << '\n';
    #else
    std::cout << "    __cpp_lib_flat_map : undefined\n";
    #endif

    #if defined(__cpp_lib_flat_set)
    std::cout << "    __cpp_lib_flat_set : " << __cpp_lib_flat_set << '\n';
    #else
    std::cout << "    __cpp_lib_flat_set : undefined\n";
    #endif

    #if defined(__cpp_lib_format)
    std::cout << "    __cpp_lib_format : " << __cpp_lib_format << '\n';
    #else
    std::cout << "    __cpp_lib_format : undefined\n";
    #endif

    #if defined(__cpp_lib_format_ranges)
    std::cout << "    __cpp_lib_format_ranges : " << __cpp_lib_format_ranges << '\n';
    #else
    std::cout << "    __cpp_lib_format_ranges : undefined\n";
    #endif

    #if defined(__cpp_lib_format_uchar)
    std::cout << "    __cpp_lib_format_uchar : " << __cpp_lib_format_uchar << '\n';
    #else
    std::cout << "    __cpp_lib_format_uchar : undefined\n";
    #endif

    #if defined(__cpp_lib_formatters)
    std::cout << "    __cpp_lib_formatters : " << __cpp_lib_formatters << '\n';
    #else
    std::cout << "    __cpp_lib_formatters : undefined\n";
    #endif

    #if defined(__cpp_lib_forward_like)
    std::cout << "    __cpp_lib_forward_like : " << __cpp_lib_forward_like << '\n';
    #else
    std::cout << "    __cpp_lib_forward_like : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_algorithm)
    std::cout << "    __cpp_lib_freestanding_algorithm : " << __cpp_lib_freestanding_algorithm << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_algorithm : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_array)
    std::cout << "    __cpp_lib_freestanding_array : " << __cpp_lib_freestanding_array << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_array : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_char_traits)
    std::cout << "    __cpp_lib_freestanding_char_traits : " << __cpp_lib_freestanding_char_traits << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_char_traits : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_charconv)
    std::cout << "    __cpp_lib_freestanding_charconv : " << __cpp_lib_freestanding_charconv << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_charconv : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_cstdlib)
    std::cout << "    __cpp_lib_freestanding_cstdlib : " << __cpp_lib_freestanding_cstdlib << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_cstdlib : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_cstring)
    std::cout << "    __cpp_lib_freestanding_cstring : " << __cpp_lib_freestanding_cstring << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_cstring : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_cwchar)
    std::cout << "    __cpp_lib_freestanding_cwchar : " << __cpp_lib_freestanding_cwchar << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_cwchar : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_errc)
    std::cout << "    __cpp_lib_freestanding_errc : " << __cpp_lib_freestanding_errc << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_errc : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_expected)
    std::cout << "    __cpp_lib_freestanding_expected : " << __cpp_lib_freestanding_expected << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_expected : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_feature_test_macros)
    std::cout << "    __cpp_lib_freestanding_feature_test_macros : " << __cpp_lib_freestanding_feature_test_macros << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_feature_test_macros : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_functional)
    std::cout << "    __cpp_lib_freestanding_functional : " << __cpp_lib_freestanding_functional << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_functional : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_iterator)
    std::cout << "    __cpp_lib_freestanding_iterator : " << __cpp_lib_freestanding_iterator << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_iterator : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_mdspan)
    std::cout << "    __cpp_lib_freestanding_mdspan : " << __cpp_lib_freestanding_mdspan << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_mdspan : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_memory)
    std::cout << "    __cpp_lib_freestanding_memory : " << __cpp_lib_freestanding_memory << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_memory : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_numeric)
    std::cout << "    __cpp_lib_freestanding_numeric : " << __cpp_lib_freestanding_numeric << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_numeric : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_operator_new)
    std::cout << "    __cpp_lib_freestanding_operator_new : " << __cpp_lib_freestanding_operator_new << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_operator_new : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_optional)
    std::cout << "    __cpp_lib_freestanding_optional : " << __cpp_lib_freestanding_optional << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_optional : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_ranges)
    std::cout << "    __cpp_lib_freestanding_ranges : " << __cpp_lib_freestanding_ranges << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_ranges : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_ratio)
    std::cout << "    __cpp_lib_freestanding_ratio : " << __cpp_lib_freestanding_ratio << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_ratio : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_string_view)
    std::cout << "    __cpp_lib_freestanding_string_view : " << __cpp_lib_freestanding_string_view << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_string_view : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_tuple)
    std::cout << "    __cpp_lib_freestanding_tuple : " << __cpp_lib_freestanding_tuple << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_tuple : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_utility)
    std::cout << "    __cpp_lib_freestanding_utility : " << __cpp_lib_freestanding_utility << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_utility : undefined\n";
    #endif

    #if defined(__cpp_lib_freestanding_variant)
    std::cout << "    __cpp_lib_freestanding_variant : " << __cpp_lib_freestanding_variant << '\n';
    #else
    std::cout << "    __cpp_lib_freestanding_variant : undefined\n";
    #endif

    #if defined(__cpp_lib_fstream_native_handle)
    std::cout << "    __cpp_lib_fstream_native_handle : " << __cpp_lib_fstream_native_handle << '\n';
    #else
    std::cout << "    __cpp_lib_fstream_native_handle : undefined\n";
    #endif

    #if defined(__cpp_lib_function_ref)
    std::cout << "    __cpp_lib_function_ref : " << __cpp_lib_function_ref << '\n';
    #else
    std::cout << "    __cpp_lib_function_ref : undefined\n";
    #endif

    #if defined(__cpp_lib_gcd_lcm)
    std::cout << "    __cpp_lib_gcd_lcm : " << __cpp_lib_gcd_lcm << '\n';
    #else
    std::cout << "    __cpp_lib_gcd_lcm : undefined\n";
    #endif

    #if defined(__cpp_lib_generator)
    std::cout << "    __cpp_lib_generator : " << __cpp_lib_generator << '\n';
    #else
    std::cout << "    __cpp_lib_generator : undefined\n";
    #endif

    #if defined(__cpp_lib_generic_associative_lookup)
    std::cout << "    __cpp_lib_generic_associative_lookup : " << __cpp_lib_generic_associative_lookup << '\n';
    #else
    std::cout << "    __cpp_lib_generic_associative_lookup : undefined\n";
    #endif

    #if defined(__cpp_lib_generic_unordered_lookup)
    std::cout << "    __cpp_lib_generic_unordered_lookup : " << __cpp_lib_generic_unordered_lookup << '\n';
    #else
    std::cout << "    __cpp_lib_generic_unordered_lookup : undefined\n";
    #endif

    #if defined(__cpp_lib_hardware_interference_size)
    std::cout << "    __cpp_lib_hardware_interference_size : " << __cpp_lib_hardware_interference_size << '\n';
    #else
    std::cout << "    __cpp_lib_hardware_interference_size : undefined\n";
    #endif

    #if defined(__cpp_lib_has_unique_object_representations)
    std::cout << "    __cpp_lib_has_unique_object_representations : " << __cpp_lib_has_unique_object_representations << '\n';
    #else
    std::cout << "    __cpp_lib_has_unique_object_representations : undefined\n";
    #endif

    #if defined(__cpp_lib_hazard_pointer)
    std::cout << "    __cpp_lib_hazard_pointer : " << __cpp_lib_hazard_pointer << '\n';
    #else
    std::cout << "    __cpp_lib_hazard_pointer : undefined\n";
    #endif

    #if defined(__cpp_lib_hypot)
    std::cout << "    __cpp_lib_hypot : " << __cpp_lib_hypot << '\n';
    #else
    std::cout << "    __cpp_lib_hypot : undefined\n";
    #endif

    #if defined(__cpp_lib_incomplete_container_elements)
    std::cout << "    __cpp_lib_incomplete_container_elements : " << __cpp_lib_incomplete_container_elements << '\n';
    #else
    std::cout << "    __cpp_lib_incomplete_container_elements : undefined\n";
    #endif

    #if defined(__cpp_lib_int_pow)
    std::cout << "    __cpp_lib_int_pow : " << __cpp_lib_int_pow << '\n';
    #else
    std::cout << "    __cpp_lib_int_pow : undefined\n";
    #endif

    #if defined(__cpp_lib_integer_comparison_functions)
    std::cout << "    __cpp_lib_integer_comparison_functions : " << __cpp_lib_integer_comparison_functions << '\n';
    #else
    std::cout << "    __cpp_lib_integer_comparison_functions : undefined\n";
    #endif

    #if defined(__cpp_lib_integer_sequence)
    std::cout << "    __cpp_lib_integer_sequence : " << __cpp_lib_integer_sequence << '\n';
    #else
    std::cout << "    __cpp_lib_integer_sequence : undefined\n";
    #endif

    #if defined(__cpp_lib_integral_constant_callable)
    std::cout << "    __cpp_lib_integral_constant_callable : " << __cpp_lib_integral_constant_callable << '\n';
    #else
    std::cout << "    __cpp_lib_integral_constant_callable : undefined\n";
    #endif

    #if defined(__cpp_lib_interpolate)
    std::cout << "    __cpp_lib_interpolate : " << __cpp_lib_interpolate << '\n';
    #else
    std::cout << "    __cpp_lib_interpolate : undefined\n";
    #endif

    #if defined(__cpp_lib_invoke)
    std::cout << "    __cpp_lib_invoke : " << __cpp_lib_invoke << '\n';
    #else
    std::cout << "    __cpp_lib_invoke : undefined\n";
    #endif

    #if defined(__cpp_lib_invoke_r)
    std::cout << "    __cpp_lib_invoke_r : " << __cpp_lib_invoke_r << '\n';
    #else
    std::cout << "    __cpp_lib_invoke_r : undefined\n";
    #endif

    #if defined(__cpp_lib_ios_noreplace)
    std::cout << "    __cpp_lib_ios_noreplace : " << __cpp_lib_ios_noreplace << '\n';
    #else
    std::cout << "    __cpp_lib_ios_noreplace : undefined\n";
    #endif

    #if defined(__cpp_lib_is_aggregate)
    std::cout << "    __cpp_lib_is_aggregate : " << __cpp_lib_is_aggregate << '\n';
    #else
    std::cout << "    __cpp_lib_is_aggregate : undefined\n";
    #endif

    #if defined(__cpp_lib_is_constant_evaluated)
    std::cout << "    __cpp_lib_is_constant_evaluated : " << __cpp_lib_is_constant_evaluated << '\n';
    #else
    std::cout << "    __cpp_lib_is_constant_evaluated : undefined\n";
    #endif

    #if defined(__cpp_lib_is_final)
    std::cout << "    __cpp_lib_is_final : " << __cpp_lib_is_final << '\n';
    #else
    std::cout << "    __cpp_lib_is_final : undefined\n";
    #endif

    #if defined(__cpp_lib_is_implicit_lifetime)
    std::cout << "    __cpp_lib_is_implicit_lifetime : " << __cpp_lib_is_implicit_lifetime << '\n';
    #else
    std::cout << "    __cpp_lib_is_implicit_lifetime : undefined\n";
    #endif

    #if defined(__cpp_lib_is_invocable)
    std::cout << "    __cpp_lib_is_invocable : " << __cpp_lib_is_invocable << '\n';
    #else
    std::cout << "    __cpp_lib_is_invocable : undefined\n";
    #endif

    #if defined(__cpp_lib_is_layout_compatible)
    std::cout << "    __cpp_lib_is_layout_compatible : " << __cpp_lib_is_layout_compatible << '\n';
    #else
    std::cout << "    __cpp_lib_is_layout_compatible : undefined\n";
    #endif

    #if defined(__cpp_lib_is_nothrow_convertible)
    std::cout << "    __cpp_lib_is_nothrow_convertible : " << __cpp_lib_is_nothrow_convertible << '\n';
    #else
    std::cout << "    __cpp_lib_is_nothrow_convertible : undefined\n";
    #endif

    #if defined(__cpp_lib_is_null_pointer)
    std::cout << "    __cpp_lib_is_null_pointer : " << __cpp_lib_is_null_pointer << '\n';
    #else
    std::cout << "    __cpp_lib_is_null_pointer : undefined\n";
    #endif

    #if defined(__cpp_lib_is_pointer_interconvertible)
    std::cout << "    __cpp_lib_is_pointer_interconvertible : " << __cpp_lib_is_pointer_interconvertible << '\n';
    #else
    std::cout << "    __cpp_lib_is_pointer_interconvertible : undefined\n";
    #endif

    #if defined(__cpp_lib_is_scoped_enum)
    std::cout << "    __cpp_lib_is_scoped_enum : " << __cpp_lib_is_scoped_enum << '\n';
    #else
    std::cout << "    __cpp_lib_is_scoped_enum : undefined\n";
    #endif

    #if defined(__cpp_lib_is_swappable)
    std::cout << "    __cpp_lib_is_swappable : " << __cpp_lib_is_swappable << '\n';
    #else
    std::cout << "    __cpp_lib_is_swappable : undefined\n";
    #endif

    #if defined(__cpp_lib_is_within_lifetime)
    std::cout << "    __cpp_lib_is_within_lifetime : " << __cpp_lib_is_within_lifetime << '\n';
    #else
    std::cout << "    __cpp_lib_is_within_lifetime : undefined\n";
    #endif

    #if defined(__cpp_lib_jthread)
    std::cout << "    __cpp_lib_jthread : " << __cpp_lib_jthread << '\n';
    #else
    std::cout << "    __cpp_lib_jthread : undefined\n";
    #endif

    #if defined(__cpp_lib_latch)
    std::cout << "    __cpp_lib_latch : " << __cpp_lib_latch << '\n';
    #else
    std::cout << "    __cpp_lib_latch : undefined\n";
    #endif

    #if defined(__cpp_lib_launder)
    std::cout << "    __cpp_lib_launder : " << __cpp_lib_launder << '\n';
    #else
    std::cout << "    __cpp_lib_launder : undefined\n";
    #endif

    #if defined(__cpp_lib_linalg)
    std::cout << "    __cpp_lib_linalg : " << __cpp_lib_linalg << '\n';
    #else
    std::cout << "    __cpp_lib_linalg : undefined\n";
    #endif

    #if defined(__cpp_lib_list_remove_return_type)
    std::cout << "    __cpp_lib_list_remove_return_type : " << __cpp_lib_list_remove_return_type << '\n';
    #else
    std::cout << "    __cpp_lib_list_remove_return_type : undefined\n";
    #endif

    #if defined(__cpp_lib_logical_traits)
    std::cout << "    __cpp_lib_logical_traits : " << __cpp_lib_logical_traits << '\n';
    #else
    std::cout << "    __cpp_lib_logical_traits : undefined\n";
    #endif

    #if defined(__cpp_lib_make_from_tuple)
    std::cout << "    __cpp_lib_make_from_tuple : " << __cpp_lib_make_from_tuple << '\n';
    #else
    std::cout << "    __cpp_lib_make_from_tuple : undefined\n";
    #endif

    #if defined(__cpp_lib_make_reverse_iterator)
    std::cout << "    __cpp_lib_make_reverse_iterator : " << __cpp_lib_make_reverse_iterator << '\n';
    #else
    std::cout << "    __cpp_lib_make_reverse_iterator : undefined\n";
    #endif

    #if defined(__cpp_lib_make_unique)
    std::cout << "    __cpp_lib_make_unique : " << __cpp_lib_make_unique << '\n';
    #else
    std::cout << "    __cpp_lib_make_unique : undefined\n";
    #endif

    #if defined(__cpp_lib_map_try_emplace)
    std::cout << "    __cpp_lib_map_try_emplace : " << __cpp_lib_map_try_emplace << '\n';
    #else
    std::cout << "    __cpp_lib_map_try_emplace : undefined\n";
    #endif

    #if defined(__cpp_lib_math_constants)
    std::cout << "    __cpp_lib_math_constants : " << __cpp_lib_math_constants << '\n';
    #else
    std::cout << "    __cpp_lib_math_constants : undefined\n";
    #endif

    #if defined(__cpp_lib_math_special_functions)
    std::cout << "    __cpp_lib_math_special_functions : " << __cpp_lib_math_special_functions << '\n';
    #else
    std::cout << "    __cpp_lib_math_special_functions : undefined\n";
    #endif

    #if defined(__cpp_lib_mdspan)
    std::cout << "    __cpp_lib_mdspan : " << __cpp_lib_mdspan << '\n';
    #else
    std::cout << "    __cpp_lib_mdspan : undefined\n";
    #endif

    #if defined(__cpp_lib_memory_resource)
    std::cout << "    __cpp_lib_memory_resource : " << __cpp_lib_memory_resource << '\n';
    #else
    std::cout << "    __cpp_lib_memory_resource : undefined\n";
    #endif

    #if defined(__cpp_lib_modules)
    std::cout << "    __cpp_lib_modules : " << __cpp_lib_modules << '\n';
    #else
    std::cout << "    __cpp_lib_modules : undefined\n";
    #endif

    #if defined(__cpp_lib_move_iterator_concept)
    std::cout << "    __cpp_lib_move_iterator_concept : " << __cpp_lib_move_iterator_concept << '\n';
    #else
    std::cout << "    __cpp_lib_move_iterator_concept : undefined\n";
    #endif

    #if defined(__cpp_lib_move_only_function)
    std::cout << "    __cpp_lib_move_only_function : " << __cpp_lib_move_only_function << '\n';
    #else
    std::cout << "    __cpp_lib_move_only_function : undefined\n";
    #endif

    #if defined(__cpp_lib_node_extract)
    std::cout << "    __cpp_lib_node_extract : " << __cpp_lib_node_extract << '\n';
    #else
    std::cout << "    __cpp_lib_node_extract : undefined\n";
    #endif

    #if defined(__cpp_lib_nonmember_container_access)
    std::cout << "    __cpp_lib_nonmember_container_access : " << __cpp_lib_nonmember_container_access << '\n';
    #else
    std::cout << "    __cpp_lib_nonmember_container_access : undefined\n";
    #endif

    #if defined(__cpp_lib_not_fn)
    std::cout << "    __cpp_lib_not_fn : " << __cpp_lib_not_fn << '\n';
    #else
    std::cout << "    __cpp_lib_not_fn : undefined\n";
    #endif

    #if defined(__cpp_lib_null_iterators)
    std::cout << "    __cpp_lib_null_iterators : " << __cpp_lib_null_iterators << '\n';
    #else
    std::cout << "    __cpp_lib_null_iterators : undefined\n";
    #endif

    #if defined(__cpp_lib_optional)
    std::cout << "    __cpp_lib_optional : " << __cpp_lib_optional << '\n';
    #else
    std::cout << "    __cpp_lib_optional : undefined\n";
    #endif

    #if defined(__cpp_lib_out_ptr)
    std::cout << "    __cpp_lib_out_ptr : " << __cpp_lib_out_ptr << '\n';
    #else
    std::cout << "    __cpp_lib_out_ptr : undefined\n";
    #endif

    #if defined(__cpp_lib_parallel_algorithm)
    std::cout << "    __cpp_lib_parallel_algorithm : " << __cpp_lib_parallel_algorithm << '\n';
    #else
    std::cout << "    __cpp_lib_parallel_algorithm : undefined\n";
    #endif

    #if defined(__cpp_lib_polymorphic_allocator)
    std::cout << "    __cpp_lib_polymorphic_allocator : " << __cpp_lib_polymorphic_allocator << '\n';
    #else
    std::cout << "    __cpp_lib_polymorphic_allocator : undefined\n";
    #endif

    #if defined(__cpp_lib_print)
    std::cout << "    __cpp_lib_print : " << __cpp_lib_print << '\n';
    #else
    std::cout << "    __cpp_lib_print : undefined\n";
    #endif

    #if defined(__cpp_lib_quoted_string_io)
    std::cout << "    __cpp_lib_quoted_string_io : " << __cpp_lib_quoted_string_io << '\n';
    #else
    std::cout << "    __cpp_lib_quoted_string_io : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges)
    std::cout << "    __cpp_lib_ranges : " << __cpp_lib_ranges << '\n';
    #else
    std::cout << "    __cpp_lib_ranges : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_as_const)
    std::cout << "    __cpp_lib_ranges_as_const : " << __cpp_lib_ranges_as_const << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_as_const : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_as_rvalue)
    std::cout << "    __cpp_lib_ranges_as_rvalue : " << __cpp_lib_ranges_as_rvalue << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_as_rvalue : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_cartesian_product)
    std::cout << "    __cpp_lib_ranges_cartesian_product : " << __cpp_lib_ranges_cartesian_product << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_cartesian_product : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_chunk)
    std::cout << "    __cpp_lib_ranges_chunk : " << __cpp_lib_ranges_chunk << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_chunk : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_chunk_by)
    std::cout << "    __cpp_lib_ranges_chunk_by : " << __cpp_lib_ranges_chunk_by << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_chunk_by : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_contains)
    std::cout << "    __cpp_lib_ranges_contains : " << __cpp_lib_ranges_contains << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_contains : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_enumerate)
    std::cout << "    __cpp_lib_ranges_enumerate : " << __cpp_lib_ranges_enumerate << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_enumerate : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_find_last)
    std::cout << "    __cpp_lib_ranges_find_last : " << __cpp_lib_ranges_find_last << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_find_last : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_fold)
    std::cout << "    __cpp_lib_ranges_fold : " << __cpp_lib_ranges_fold << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_fold : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_iota)
    std::cout << "    __cpp_lib_ranges_iota : " << __cpp_lib_ranges_iota << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_iota : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_join_with)
    std::cout << "    __cpp_lib_ranges_join_with : " << __cpp_lib_ranges_join_with << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_join_with : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_repeat)
    std::cout << "    __cpp_lib_ranges_repeat : " << __cpp_lib_ranges_repeat << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_repeat : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_slide)
    std::cout << "    __cpp_lib_ranges_slide : " << __cpp_lib_ranges_slide << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_slide : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_starts_ends_with)
    std::cout << "    __cpp_lib_ranges_starts_ends_with : " << __cpp_lib_ranges_starts_ends_with << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_starts_ends_with : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_stride)
    std::cout << "    __cpp_lib_ranges_stride : " << __cpp_lib_ranges_stride << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_stride : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_to_container)
    std::cout << "    __cpp_lib_ranges_to_container : " << __cpp_lib_ranges_to_container << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_to_container : undefined\n";
    #endif

    #if defined(__cpp_lib_ranges_zip)
    std::cout << "    __cpp_lib_ranges_zip : " << __cpp_lib_ranges_zip << '\n';
    #else
    std::cout << "    __cpp_lib_ranges_zip : undefined\n";
    #endif

    #if defined(__cpp_lib_ratio)
    std::cout << "    __cpp_lib_ratio : " << __cpp_lib_ratio << '\n';
    #else
    std::cout << "    __cpp_lib_ratio : undefined\n";
    #endif

    #if defined(__cpp_lib_raw_memory_algorithms)
    std::cout << "    __cpp_lib_raw_memory_algorithms : " << __cpp_lib_raw_memory_algorithms << '\n';
    #else
    std::cout << "    __cpp_lib_raw_memory_algorithms : undefined\n";
    #endif

    #if defined(__cpp_lib_rcu)
    std::cout << "    __cpp_lib_rcu : " << __cpp_lib_rcu << '\n';
    #else
    std::cout << "    __cpp_lib_rcu : undefined\n";
    #endif

    #if defined(__cpp_lib_reference_from_temporary)
    std::cout << "    __cpp_lib_reference_from_temporary : " << __cpp_lib_reference_from_temporary << '\n';
    #else
    std::cout << "    __cpp_lib_reference_from_temporary : undefined\n";
    #endif

    #if defined(__cpp_lib_remove_cvref)
    std::cout << "    __cpp_lib_remove_cvref : " << __cpp_lib_remove_cvref << '\n';
    #else
    std::cout << "    __cpp_lib_remove_cvref : undefined\n";
    #endif

    #if defined(__cpp_lib_result_of_sfinae)
    std::cout << "    __cpp_lib_result_of_sfinae : " << __cpp_lib_result_of_sfinae << '\n';
    #else
    std::cout << "    __cpp_lib_result_of_sfinae : undefined\n";
    #endif

    #if defined(__cpp_lib_robust_nonmodifying_seq_ops)
    std::cout << "    __cpp_lib_robust_nonmodifying_seq_ops : " << __cpp_lib_robust_nonmodifying_seq_ops << '\n';
    #else
    std::cout << "    __cpp_lib_robust_nonmodifying_seq_ops : undefined\n";
    #endif

    #if defined(__cpp_lib_sample)
    std::cout << "    __cpp_lib_sample : " << __cpp_lib_sample << '\n';
    #else
    std::cout << "    __cpp_lib_sample : undefined\n";
    #endif

    #if defined(__cpp_lib_saturation_arithmetic)
    std::cout << "    __cpp_lib_saturation_arithmetic : " << __cpp_lib_saturation_arithmetic << '\n';
    #else
    std::cout << "    __cpp_lib_saturation_arithmetic : undefined\n";
    #endif

    #if defined(__cpp_lib_scoped_lock)
    std::cout << "    __cpp_lib_scoped_lock : " << __cpp_lib_scoped_lock << '\n';
    #else
    std::cout << "    __cpp_lib_scoped_lock : undefined\n";
    #endif

    #if defined(__cpp_lib_semaphore)
    std::cout << "    __cpp_lib_semaphore : " << __cpp_lib_semaphore << '\n';
    #else
    std::cout << "    __cpp_lib_semaphore : undefined\n";
    #endif

    #if defined(__cpp_lib_shared_mutex)
    std::cout << "    __cpp_lib_shared_mutex : " << __cpp_lib_shared_mutex << '\n';
    #else
    std::cout << "    __cpp_lib_shared_mutex : undefined\n";
    #endif

    #if defined(__cpp_lib_shared_ptr_arrays)
    std::cout << "    __cpp_lib_shared_ptr_arrays : " << __cpp_lib_shared_ptr_arrays << '\n';
    #else
    std::cout << "    __cpp_lib_shared_ptr_arrays : undefined\n";
    #endif

    #if defined(__cpp_lib_shared_ptr_weak_type)
    std::cout << "    __cpp_lib_shared_ptr_weak_type : " << __cpp_lib_shared_ptr_weak_type << '\n';
    #else
    std::cout << "    __cpp_lib_shared_ptr_weak_type : undefined\n";
    #endif

    #if defined(__cpp_lib_shared_timed_mutex)
    std::cout << "    __cpp_lib_shared_timed_mutex : " << __cpp_lib_shared_timed_mutex << '\n';
    #else
    std::cout << "    __cpp_lib_shared_timed_mutex : undefined\n";
    #endif

    #if defined(__cpp_lib_shift)
    std::cout << "    __cpp_lib_shift : " << __cpp_lib_shift << '\n';
    #else
    std::cout << "    __cpp_lib_shift : undefined\n";
    #endif

    #if defined(__cpp_lib_smart_ptr_for_overwrite)
    std::cout << "    __cpp_lib_smart_ptr_for_overwrite : " << __cpp_lib_smart_ptr_for_overwrite << '\n';
    #else
    std::cout << "    __cpp_lib_smart_ptr_for_overwrite : undefined\n";
    #endif

    #if defined(__cpp_lib_smart_ptr_owner_equality)
    std::cout << "    __cpp_lib_smart_ptr_owner_equality : " << __cpp_lib_smart_ptr_owner_equality << '\n';
    #else
    std::cout << "    __cpp_lib_smart_ptr_owner_equality : undefined\n";
    #endif

    #if defined(__cpp_lib_source_location)
    std::cout << "    __cpp_lib_source_location : " << __cpp_lib_source_location << '\n';
    #else
    std::cout << "    __cpp_lib_source_location : undefined\n";
    #endif

    #if defined(__cpp_lib_span)
    std::cout << "    __cpp_lib_span : " << __cpp_lib_span << '\n';
    #else
    std::cout << "    __cpp_lib_span : undefined\n";
    #endif

    #if defined(__cpp_lib_span_initializer_list)
    std::cout << "    __cpp_lib_span_initializer_list : " << __cpp_lib_span_initializer_list << '\n';
    #else
    std::cout << "    __cpp_lib_span_initializer_list : undefined\n";
    #endif

    #if defined(__cpp_lib_spanstream)
    std::cout << "    __cpp_lib_spanstream : " << __cpp_lib_spanstream << '\n';
    #else
    std::cout << "    __cpp_lib_spanstream : undefined\n";
    #endif

    #if defined(__cpp_lib_ssize)
    std::cout << "    __cpp_lib_ssize : " << __cpp_lib_ssize << '\n';
    #else
    std::cout << "    __cpp_lib_ssize : undefined\n";
    #endif

    #if defined(__cpp_lib_sstream_from_string_view)
    std::cout << "    __cpp_lib_sstream_from_string_view : " << __cpp_lib_sstream_from_string_view << '\n';
    #else
    std::cout << "    __cpp_lib_sstream_from_string_view : undefined\n";
    #endif

    #if defined(__cpp_lib_stacktrace)
    std::cout << "    __cpp_lib_stacktrace : " << __cpp_lib_stacktrace << '\n';
    #else
    std::cout << "    __cpp_lib_stacktrace : undefined\n";
    #endif

    #if defined(__cpp_lib_start_lifetime_as)
    std::cout << "    __cpp_lib_start_lifetime_as : " << __cpp_lib_start_lifetime_as << '\n';
    #else
    std::cout << "    __cpp_lib_start_lifetime_as : undefined\n";
    #endif

    #if defined(__cpp_lib_starts_ends_with)
    std::cout << "    __cpp_lib_starts_ends_with : " << __cpp_lib_starts_ends_with << '\n';
    #else
    std::cout << "    __cpp_lib_starts_ends_with : undefined\n";
    #endif

    #if defined(__cpp_lib_stdatomic_h)
    std::cout << "    __cpp_lib_stdatomic_h : " << __cpp_lib_stdatomic_h << '\n';
    #else
    std::cout << "    __cpp_lib_stdatomic_h : undefined\n";
    #endif

    #if defined(__cpp_lib_string_contains)
    std::cout << "    __cpp_lib_string_contains : " << __cpp_lib_string_contains << '\n';
    #else
    std::cout << "    __cpp_lib_string_contains : undefined\n";
    #endif

    #if defined(__cpp_lib_string_resize_and_overwrite)
    std::cout << "    __cpp_lib_string_resize_and_overwrite : " << __cpp_lib_string_resize_and_overwrite << '\n';
    #else
    std::cout << "    __cpp_lib_string_resize_and_overwrite : undefined\n";
    #endif

    #if defined(__cpp_lib_string_udls)
    std::cout << "    __cpp_lib_string_udls : " << __cpp_lib_string_udls << '\n';
    #else
    std::cout << "    __cpp_lib_string_udls : undefined\n";
    #endif

    #if defined(__cpp_lib_string_view)
    std::cout << "    __cpp_lib_string_view : " << __cpp_lib_string_view << '\n';
    #else
    std::cout << "    __cpp_lib_string_view : undefined\n";
    #endif

    #if defined(__cpp_lib_submdspan)
    std::cout << "    __cpp_lib_submdspan : " << __cpp_lib_submdspan << '\n';
    #else
    std::cout << "    __cpp_lib_submdspan : undefined\n";
    #endif

    #if defined(__cpp_lib_syncbuf)
    std::cout << "    __cpp_lib_syncbuf : " << __cpp_lib_syncbuf << '\n';
    #else
    std::cout << "    __cpp_lib_syncbuf : undefined\n";
    #endif

    #if defined(__cpp_lib_text_encoding)
    std::cout << "    __cpp_lib_text_encoding : " << __cpp_lib_text_encoding << '\n';
    #else
    std::cout << "    __cpp_lib_text_encoding : undefined\n";
    #endif

    #if defined(__cpp_lib_three_way_comparison)
    std::cout << "    __cpp_lib_three_way_comparison : " << __cpp_lib_three_way_comparison << '\n';
    #else
    std::cout << "    __cpp_lib_three_way_comparison : undefined\n";
    #endif

    #if defined(__cpp_lib_to_address)
    std::cout << "    __cpp_lib_to_address : " << __cpp_lib_to_address << '\n';
    #else
    std::cout << "    __cpp_lib_to_address : undefined\n";
    #endif

    #if defined(__cpp_lib_to_array)
    std::cout << "    __cpp_lib_to_array : " << __cpp_lib_to_array << '\n';
    #else
    std::cout << "    __cpp_lib_to_array : undefined\n";
    #endif

    #if defined(__cpp_lib_to_chars)
    std::cout << "    __cpp_lib_to_chars : " << __cpp_lib_to_chars << '\n';
    #else
    std::cout << "    __cpp_lib_to_chars : undefined\n";
    #endif

    #if defined(__cpp_lib_to_string)
    std::cout << "    __cpp_lib_to_string : " << __cpp_lib_to_string << '\n';
    #else
    std::cout << "    __cpp_lib_to_string : undefined\n";
    #endif

    #if defined(__cpp_lib_to_underlying)
    std::cout << "    __cpp_lib_to_underlying : " << __cpp_lib_to_underlying << '\n';
    #else
    std::cout << "    __cpp_lib_to_underlying : undefined\n";
    #endif

    #if defined(__cpp_lib_transformation_trait_aliases)
    std::cout << "    __cpp_lib_transformation_trait_aliases : " << __cpp_lib_transformation_trait_aliases << '\n';
    #else
    std::cout << "    __cpp_lib_transformation_trait_aliases : undefined\n";
    #endif

    #if defined(__cpp_lib_transparent_operators)
    std::cout << "    __cpp_lib_transparent_operators : " << __cpp_lib_transparent_operators << '\n';
    #else
    std::cout << "    __cpp_lib_transparent_operators : undefined\n";
    #endif

    #if defined(__cpp_lib_tuple_element_t)
    std::cout << "    __cpp_lib_tuple_element_t : " << __cpp_lib_tuple_element_t << '\n';
    #else
    std::cout << "    __cpp_lib_tuple_element_t : undefined\n";
    #endif

    #if defined(__cpp_lib_tuple_like)
    std::cout << "    __cpp_lib_tuple_like : " << __cpp_lib_tuple_like << '\n';
    #else
    std::cout << "    __cpp_lib_tuple_like : undefined\n";
    #endif

    #if defined(__cpp_lib_tuples_by_type)
    std::cout << "    __cpp_lib_tuples_by_type : " << __cpp_lib_tuples_by_type << '\n';
    #else
    std::cout << "    __cpp_lib_tuples_by_type : undefined\n";
    #endif

    #if defined(__cpp_lib_type_identity)
    std::cout << "    __cpp_lib_type_identity : " << __cpp_lib_type_identity << '\n';
    #else
    std::cout << "    __cpp_lib_type_identity : undefined\n";
    #endif

    #if defined(__cpp_lib_type_trait_variable_templates)
    std::cout << "    __cpp_lib_type_trait_variable_templates : " << __cpp_lib_type_trait_variable_templates << '\n';
    #else
    std::cout << "    __cpp_lib_type_trait_variable_templates : undefined\n";
    #endif

    #if defined(__cpp_lib_uncaught_exceptions)
    std::cout << "    __cpp_lib_uncaught_exceptions : " << __cpp_lib_uncaught_exceptions << '\n';
    #else
    std::cout << "    __cpp_lib_uncaught_exceptions : undefined\n";
    #endif

    #if defined(__cpp_lib_unordered_map_try_emplace)
    std::cout << "    __cpp_lib_unordered_map_try_emplace : " << __cpp_lib_unordered_map_try_emplace << '\n';
    #else
    std::cout << "    __cpp_lib_unordered_map_try_emplace : undefined\n";
    #endif

    #if defined(__cpp_lib_unreachable)
    std::cout << "    __cpp_lib_unreachable : " << __cpp_lib_unreachable << '\n';
    #else
    std::cout << "    __cpp_lib_unreachable : undefined\n";
    #endif

    #if defined(__cpp_lib_unwrap_ref)
    std::cout << "    __cpp_lib_unwrap_ref : " << __cpp_lib_unwrap_ref << '\n';
    #else
    std::cout << "    __cpp_lib_unwrap_ref : undefined\n";
    #endif

    #if defined(__cpp_lib_variant)
    std::cout << "    __cpp_lib_variant : " << __cpp_lib_variant << '\n';
    #else
    std::cout << "    __cpp_lib_variant : undefined\n";
    #endif

    #if defined(__cpp_lib_void_t)
    std::cout << "    __cpp_lib_void_t : " << __cpp_lib_void_t << '\n';
    #else
    std::cout << "    __cpp_lib_void_t : undefined\n";
    #endif
}
