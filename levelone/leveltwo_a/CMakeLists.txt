cmake_minimum_required(VERSION 3.20)

# Set the project name
project(leveltwo_a)

# Add the library
add_library(leveltwo_a SHARED src/l2a.cpp)

# Specify the include directories
target_include_directories(leveltwo_a PUBLIC include)

# Optionally, you can specify the C++ standard
set_target_properties(leveltwo_a PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED YES)