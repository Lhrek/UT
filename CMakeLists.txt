cmake_minimum_required(VERSION 3.16)
project(UT)

add_executable(UT 
  src/UTmain.cpp
)

target_include_directories(UT
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)


# use gtest
# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

enable_testing()

include(GoogleTest)
add_executable(tests tests/test_main.cpp)
target_link_libraries(tests GTest::gtest_main)
# gtest_discover_tests(UT)