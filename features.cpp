#include <iostream>
#include <chrono>


#define print(feature) \
do { std::cout << #feature " : " << feature << '\n'; } while (false)


int main()
{
    print(__cpp_aggregate_bases);
    print(__cpp_aggregate_nsdmi);
    print(__cpp_aggregate_paren_init);
    print(__cpp_alias_templates);
    print(__cpp_aligned_new);
    print(__cpp_attributes);
    //print(__cpp_auto_cast);
    print(__cpp_binary_literals);
    print(__cpp_capture_star_this);
    //print(__cpp_char);
    print(__cpp_concepts);
    print(__cpp_conditional_explicit);
    print(__cpp_consteval);
    print(__cpp_constexpr);
    print(__cpp_constexpr_dynamic_alloc);
    print(__cpp_constexpr_in_decltype);
    print(__cpp_constinit);
    print(__cpp_decltype);
    print(__cpp_decltype_auto);
    print(__cpp_deduction_guides);
    print(__cpp_delegating_constructors);
    print(__cpp_designated_initializers);
    print(__cpp_enumerator_attributes);
    //print(__cpp_explicit_this_parameter);
    print(__cpp_fold_expressions);
    print(__cpp_generic_lambdas);
    print(__cpp_guaranteed_copy_elision);
    print(__cpp_hex_float);
    //print(__cpp_if_consteval);
    print(__cpp_if_constexpr);
    print(__cpp_impl_coroutine);
    print(__cpp_impl_destroying_delete);
    print(__cpp_impl_three_way_comparison);
    //print(__cpp_implicit_move);
    print(__cpp_inheriting_constructors);
    print(__cpp_init_captures);
    print(__cpp_initializer_lists);
    print(__cpp_inline_variables);
    print(__cpp_lambdas);
    //print(__cpp_modules);
    //print(__cpp_multidimensional_subscript);
    //print(__cpp_named_character_escapes);
    print(__cpp_namespace_attributes);
    print(__cpp_noexcept_function_type);
    print(__cpp_nontype_template_args);
    print(__cpp_nontype_template_parameter_auto);
    print(__cpp_nsdmi);
    //print(__cpp_pack_indexing);
    //print(__cpp_placeholder_variables);
    print(__cpp_range_based_for);
    print(__cpp_raw_strings);
    print(__cpp_ref_qualifiers);
    print(__cpp_return_type_deduction);
    print(__cpp_rvalue_references);
    //print(__cpp_size_t_suffix);
    print(__cpp_sized_deallocation);
    print(__cpp_static_assert);
    //print(__cpp_static_call_operator);
    print(__cpp_structured_bindings);
    print(__cpp_template_template_args);
    print(__cpp_threadsafe_static_init);
    print(__cpp_unicode_characters);
    print(__cpp_unicode_literals);
    print(__cpp_user_defined_literals);
    print(__cpp_using_enum);
    print(__cpp_variable_templates);
    print(__cpp_variadic_templates);
    print(__cpp_variadic_using);
}
