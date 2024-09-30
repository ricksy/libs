cmake_minimum_required(VERSION 3.20)
project(libs VERSION 0.1.0 LANGUAGES C CXX)

add_executable(myprog main.cpp)
add_subdirectory(levelone)
target_link_libraries(myprog PRIVATE levelone)

