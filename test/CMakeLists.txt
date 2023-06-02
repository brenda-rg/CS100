cmake_minimum_required(VERSION 3.0)

project(testing)

add_subdirectory(googletest)
include_directories(../header ../src)

add_executable(runAllTests
    ../src/TaskBase.cpp
    testTaskBase.cpp
#     ../src/DateTimeTask.cpp
#     testDateTimeTask.cpp
    ../src/VerifyDate.cpp
    testVerifyDate.cpp
)

add_executable(taskTest
    ../src/TaskBase.cpp
    testTaskBase.cpp
)
# add_executable(dateTaskTest
#     ../src/DateTimeTask.cpp
#     testDateTimeTask.cpp
#     ../src/TaskBase.cpp
# )
add_executable(verifyDateTest
    ../src/VerifyDate.cpp
    testVerifyDate.cpp
)

target_link_libraries(taskTest gtest gtest_main)
# target_link_libraries(dateTaskTest gtest gtest_main)
target_link_libraries(verifyDateTest gtest gtest_main)
target_link_libraries(runAllTests gtest gtest_main)


#TARGET_COMPILE_DEFINITIONS(taskTest PRIVATE gtest_disable_pthreads=ON)
