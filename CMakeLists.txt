cmake_minimum_required(VERSION 3.16)
project(Kooala)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        src/KooalaText.cpp
        lib/logger/Logger.cpp
        src/SQLite_DatabaseConnect.cpp
        src/SQLite_ReadTable.cpp
        src/SQLite_CreateTable.cpp
        src/SQLite_WriteTable.cpp
        src/InitializeDatabase.cpp
        src/KooalaText.cpp
        src/main.cpp
        src/PriorityTask.cpp
        src/DateTimeTask.cpp
        src/Tag.cpp
        src/TagTask.cpp
        src/TaskBase.cpp
        src/VerifyDate.cpp
        src/User.cpp header/User.h)

set(TEST_FILES
        test/testSQLite_DatabaseConnect.cpp
        test/testDateTimeTask.cpp
        test/testTag.cpp
        test/testTagTask.cpp
        test/testTaskBase.cpp
        test/testVerifyDate.cpp
        test/testInitalizeDatabase.cpp)

add_executable(Kooala ${SOURCE_FILES})

add_executable(Kooala_Test ${SOURCE_FILES} ${TEST_FILES})

add_subdirectory(lib/sqlite)

target_link_libraries(Kooala PUBLIC sqlite3)
target_include_directories(Kooala PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/lib/sqlite"
        )

target_link_libraries(Kooala_Test PUBLIC sqlite3 GTest::gtest_main)
target_include_directories(Kooala_Test PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/lib/sqlite"
        )

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
gtest_discover_tests(Kooala_Test)