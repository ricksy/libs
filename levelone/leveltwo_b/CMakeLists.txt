cmake_minimum_required(VERSION 3.20)

# Set the project name
project(leveltwo_b)

# Add the library
add_library(leveltwo_b SHARED src/l2b.cpp)

# Specify the include directories
target_include_directories(leveltwo_b PUBLIC include)

# Optionally, you can specify the C++ standard
set_target_properties(leveltwo_b PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED YES)