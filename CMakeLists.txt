project(CodingDojo)

cmake_minimum_required(VERSION 3.10)

add_library(Catch2 INTERFACE)
target_include_directories(Catch2 INTERFACE catch2)

add_library(Library src/library.cpp)
target_include_directories(Library PUBLIC include)

add_executable(test src/test_library.cpp)
target_link_libraries(test Library Catch2)
add_test(test COMMAND test)


