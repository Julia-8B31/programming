cmake_minimum_required(VERSION 3.0.0)
project(laba7 VERSION 0.1.0 LANGUAGES C CXX)

add_library(main main.cpp)

add_executable(assert assept.cpp)
target_link_libraries(assert main)