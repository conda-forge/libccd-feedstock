cmake_minimum_required(VERSION 3.12)

project(assimp_main)

find_package(ccd CONFIG REQUIRED)

add_executable(ccd_main ccd_main.cpp)

target_link_libraries(ccd_main PRIVATE ccd)
