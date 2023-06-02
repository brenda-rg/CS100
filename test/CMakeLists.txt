cmake_minimum_required(VERSION 3.0)

project(testing)

add_subdirectory(googletest)
include_directories(../header ../src)
link_libraries(gtest gtest_main)

add_executable(runAllTests
    ../src/TaskBase.cpp
    testTaskBase.cpp
    ../src/DateTimeTask.cpp
    testDateTimeTask.cpp
    ../src/VerifyDate.cpp
    testVerifyDate.cpp
    ../src/Tag.cpp
    testTag.cpp
    ../src/TagTask.cpp
    testTagTask.cpp
)

add_executable(taskTest
    ../src/TaskBase.cpp
    testTaskBase.cpp
)

add_executable(dateTaskTest
    ../src/DateTimeTask.cpp
    testDateTimeTask.cpp
    ../src/TaskBase.cpp
    ../src/VerifyDate.cpp
)

add_executable(verifyDateTest
    ../src/VerifyDate.cpp
    testVerifyDate.cpp
)
add_executable(tagTest
    ../src/Tag.cpp
    testTag.cpp
)
# add_executable(tagTaskTest
#     ../src/TagTask.cpp
#     ../src/Tag.cpp
#     ../src/DateTimeTask.cpp
#     ../src/TaskBase.cpp
#     testTagTask.cpp
# )

