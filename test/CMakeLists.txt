cmake_minimum_required(VERSION 3.0)

project(testing)

add_subdirectory(googletest)
include_directories(../header ../src)

add_executable(taskTest
    ../src/TaskBase.cpp
    testTaskBase.cpp
)
add_executable(dateTaskTest
    ../src/DateTimeTask.cpp
    testDateTimeTask.cpp
    ../src/TaskBase.cpp
)

target_link_libraries(taskTest gtest gtest_main)
target_link_libraries(dateTaskTest gtest gtest_main)


#TARGET_COMPILE_DEFINITIONS(taskTest PRIVATE gtest_disable_pthreads=ON)
