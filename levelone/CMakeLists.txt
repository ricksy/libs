add_subdirectory(leveltwo_a)
add_subdirectory(leveltwo_b)


add_library(levelone leveltwo_a/src/l2a.cpp leveltwo_b/src/l2b.cpp)
target_include_directories(levelone PUBLIC leveltwo_a/include leveltwo_b/include)
target_link_libraries(levelone leveltwo_a leveltwo_b)
set_target_properties(levelone PROPERTIES CXX_STANDARD 11 CXX_STANDARD_REQUIRED YES)
