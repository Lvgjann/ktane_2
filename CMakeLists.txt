# cmake version to be used
cmake_minimum_required(VERSION 3.12.1)

# project name
project(ktane2)

# flags

# files

# include
include_directories(./include ./src ./libs)

# target
add_executable(binary ./src/main.cpp src/Module.cpp src/Module.h src/Button.cpp src/Button.h src/Bomb.cpp src/Bomb.h src/_instructions.cpp inc/_instructions.h src/_application.cpp inc/_application.h src/_modules.cpp inc/_modules.h)

# external libs

#