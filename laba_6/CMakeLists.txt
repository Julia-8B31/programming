cmake_minimum_required(VERSION 3.0.0)
project(laba6 VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_FILES main.cpp matrix.cpp convolution.cpp downsampling.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})