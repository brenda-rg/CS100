cmake_minimum_required(VERSION 3.0)

project(Kooala)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

add_subdirectory(lib/sqlite3)

add_executable(Kooala
    src/main.cpp
    src/KooalaText.cpp
)

target_link_libraries(Kooala PRIVATE sqlite3)

