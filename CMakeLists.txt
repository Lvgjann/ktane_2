# cmake version to be used
cmake_minimum_required(VERSION 3.12.1)

# project name
project(ktane2)

# flags

# files

# include
include_directories(./include ./src ./libs)

# target
add_executable(binary ./src/main.cpp src/Module.cpp src/Module.h src/Button.cpp src/Button.h src/Bomb.cpp src/Bomb.h src/_instructions.cpp src/_instructions.h src/_application.cpp src/_application.h src/_modules.cpp src/_modules.h)

# external libs

#