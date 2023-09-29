cmake_minimum_required(VERSION 3.22)
project(C_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(SchoolProjects)

add_executable(C_projects
        SchoolProjects/MOP/week1.cpp)
