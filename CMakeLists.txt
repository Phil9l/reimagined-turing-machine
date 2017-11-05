cmake_minimum_required (VERSION 3.9)
project(game)
file(GLOB_RECURSE SOURCES src/*.cpp)
add_executable(reimagined-turing-machine ${SOURCES})
