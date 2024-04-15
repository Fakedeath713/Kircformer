cmake_minimum_required(VERSION 3.0.0)
project(kircformer)

file(GLOB SRCS *.cpp)
add_executable(kircformer ${SRCS})