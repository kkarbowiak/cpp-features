cmake_minimum_required(VERSION 3.15)

project(cpp-features VERSION 0.0.1 LANGUAGES CXX)

add_executable(cpp-features features.cpp)

target_compile_features(cpp-features PRIVATE cxx_std_20)

add_custom_target(print-features ALL
    COMMAND ${CMAKE_BINARY_DIR}/cpp-features
    DEPENDS cpp-features)
