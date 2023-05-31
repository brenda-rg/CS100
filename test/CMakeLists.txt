cmake_minimum_required(VERSION 3.0)

project(testing)

add_subdirectory(googletest)

add_executable(taskTest
    ../src/TaskBase.cpp
    testTaskBase.cpp
)

TARGET_LINK_LIBRARIES(taskTest gtest gtest_main)
target_include_directories(taskTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header)
target_include_directories(taskTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
#TARGET_COMPILE_DEFINITIONS(taskTest PRIVATE gtest_disable_pthreads=ON)
