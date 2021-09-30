cmake_minimum_required(VERSION 3.1)

project(Task1)
add_library(Task1 SHARED src/Trigonometry.cpp src/Logic.cpp src/Piecewise.cpp src/Inside.cpp)
add_executable(Task1.test tests/Trigonometry.Tests.cpp tests/Logic.Tests.cpp tests/Piecewise.Tests.cpp tests/Inside.Tests.cpp)
# enable_testing()
target_link_libraries(Task1.test Task1 gtest gtest_main pthread)
include(GoogleTest)
gtest_discover_tests(Task1.test)

