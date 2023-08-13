cmake_minimum_required(VERSION 3.27)

project(pg-script-2)
set(CMAKE_CXX_STANDARD 11)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_library(pg-script-2 
    "src/do.cpp"
    "include/do.hpp"
)

add_subdirectory(test)