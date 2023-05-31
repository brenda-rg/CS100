#include "gtest/gtest.h"
#include "../header/TaskBase.h"

using namespace std;

TEST(TaskBase, testConstructor) {
    EXPECT_NO_THROW(TaskBase task);
}

TEST(TaskBase, testConstructor_one_word) {
    EXPECT_NO_THROW(TaskBase task = TaskBase("checklist"));
}

TEST(TaskBase, testConstructor_sentence) {
    EXPECT_NO_THROW(TaskBase task = TaskBase("things i need to do"));
}

TEST(TaskBase, testSetName) {
    TaskBase task;
    task.set_name("monday");

    EXPECT_EQ(task.get_name(), "monday");
}

TEST(TaskBase, testSetName_constructor) {
    TaskBase task = TaskBase("monday");

    EXPECT_EQ(task.get_name(), "monday");
}

// uncomment when implemented sql
/* TEST(TaskBase, testGenerateId) {
    TaskBase task;

    EXPECT_EQ(task.getId(), 0)
 }
 */