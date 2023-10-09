cmake_minimum_required(VERSION 3.25.1)  # Minimum CMake version
project(learnC++)  # Project name

set(CMAKE_CXX_STANDARD 17)  # C++ Standard

add_executable(learnC++ main.cpp)  # Target executable and source file

set_target_properties(learnC++ PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/../bin
)
