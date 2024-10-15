cmake_minimum_required(VERSION 3.29)
project(Polaris CXX)

set(CMAKE_CXX_STANDARD 23)

include_directories(include/cxxopts/include)

add_executable(Polaris main.cpp
        src/cpu.cpp
        src/cpu.h
        src/memory.cpp
        src/memory.h
        src/log.cpp
        src/log.h
)
