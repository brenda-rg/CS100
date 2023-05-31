#include "gtest/gtest.h"
#include "../header/DateTimeTask.h"
#include "../header/TaskBase.h"
#include <iostream>
using namespace std;

TEST(DateTimeTask, test_Constructor) {
    EXPECT_NO_THROW(DateTimeTask task);
}

TEST(DateTimeTask, testConstructor_usingTaskBase) {

    TaskBase baseTask;

    EXPECT_NO_THROW(DateTimeTask task = DateTimeTask(baseTask));
}

TEST(DateTimeTask, testConstructor_TaskBaseNamed) {

    TaskBase baseTask;
    baseTask.set_name("original");

    EXPECT_NO_THROW(DateTimeTask task = DateTimeTask(baseTask));
}

TEST(DateTimeTask, testConstructor_TaskBaseNamedValue) {

    TaskBase baseTask;
    baseTask.set_name("original");

    DateTimeTask task = DateTimeTask(baseTask);
    
    EXPECT_EQ(baseTask.get_name() , task.get_name());
}