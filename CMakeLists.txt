cmake_minimum_required(VERSION 3.14)
project(twilight)

set(CMAKE_CXX_STANDARD 14)

add_definitions(-DDEBUG)
add_definitions(-DUNICODE)

include_directories("tripart/dx/inc")

link_directories("tripart/dx/lib/x86")

add_executable(twilight main.cpp graphics/dx9_graphics.cpp graphics/dx9_graphics.h graphics/dx9_common.h)