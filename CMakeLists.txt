# cmake_minimum_required(VERSION <specify CMake version here>)
project(Threads)

set(CMAKE_CXX_STANDARD 20)

add_executable(Threads main.cpp Printer/Printer.cpp Printer/ConsoleSize.cpp Printer/ConsoleSize.hpp)