cmake_minimum_required(VERSION 3.10)

# Project name
project(NEAT_Project)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the output directory for build files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# Collect all source files recursively in the project directory
file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/*.cpp")

# Exclude CMakeFiles directory
list(FILTER SOURCES EXCLUDE REGEX "${CMAKE_BINARY_DIR}/.*")

# Add executable
add_executable(NEAT_Project ${SOURCES})

# Include directories (if you have header files in subdirectories)
include_directories(${PROJECT_SOURCE_DIR})
