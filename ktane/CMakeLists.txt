cmake_minimum_required(VERSION 3.12.1)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")
subdirs(src)
file(GLOB SOURCES "src/*.cpp")