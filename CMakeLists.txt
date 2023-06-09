cmake_minimum_required(VERSION 3.16)
project(Kooala)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# set(CMAKE_CXX_STANDARD 14)



add_executable(Kooala
        src/KooalaText.cpp
        src/main.cpp
        lib/logger/Logger.cpp
        src/SQLite_DatabaseConnect.cpp
        src/SQLite_ReadTable.cpp
        src/SQLite_CreateTable.cpp
        src/SQLite_WriteTable.cpp
        test/SQLite_DatabaseConnect_Test.cpp)

add_executable(Kooal_Test

        )
add_executable(Task
        src/main.cpp
        src/TaskBase.cpp
)

add_subdirectory(lib/sqlite_tarball)
target_link_libraries(Kooala PUBLIC sqlite3)
target_link_libraries(Kooala_Test PUBLIC sqlite3)
target_include_directories(Kooala PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/lib/sqlite_tarball"
        )

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(Kooala_Test GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(Kooala_Test)