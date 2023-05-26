cmake_minimum_required(VERSION 3.16)
project(Kooala)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
# set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/sqlite3)


add_executable(Kooala
        src/KooalaText.cpp
        src/main.cpp
        )
add_executable(Task
        src/main.cpp
        src/TaskBase.cpp
)

target_link_libraries(Kooala PRIVATE sqlite3)

