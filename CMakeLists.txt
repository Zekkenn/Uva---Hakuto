cmake_minimum_required(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})  # CMake version check
project(CompetitiveProgramming)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

include_directories(/usr/local/include)

add_subdirectory("13012 - Identifying Tea")
add_executable(main "13012 - Identifying Tea/main.cpp")
