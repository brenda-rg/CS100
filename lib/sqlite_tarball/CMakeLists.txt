# cmake_minimum_required(VERSION 3.16)

set(SQLITE3_SOURCE_DIR ${CMAKE_SOURCE_DIR}/lib/sqlite)
include_directories(${SQLITE3_SOURCE_DIR})

add_library(sqlite3 STATIC
        ${SQLITE3_SOURCE_DIR}/sqlite3.c
        )

target_include_directories(sqlite3 PUBLIC ${SQLITE3_SOURCE_DIR})
link_directories(lib/sqlite)
target_link_libraries(sqlite3 INTERFACE ${CMAKE_DL_LIBS} pthread)