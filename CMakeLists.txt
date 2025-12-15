cmake_minimum_required(VERSION 3.16)
project(my_first_cicd_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sum_lib src/sum.cpp)
target_include_directories(sum_lib PUBLIC src)

add_executable(unit_tests tests/test_sum.cpp)
target_link_libraries(unit_tests PRIVATE sum_lib)

enable_testing()
add_test(NAME sum_tests COMMAND unit_tests)
