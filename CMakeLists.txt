cmake_minimum_required(VERSION 3.21)
project(final_project_broja016_aoroz064_anguy344_ikalu001)

set(CMAKE_CXX_STANDARD 14)

include_directories(header)

add_executable(final_project_broja016_aoroz064_anguy344_ikalu001
        header/BaseMenu.h
        header/KooalaText.h
        src/BaseMenu.cpp
        src/KooalaText.cpp
        src/main.cpp)
