cmake_minimum_required(VERSION 3.0.0)
project(laba_8 VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCE_FILES main.cpp hash.cpp hash.h)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})