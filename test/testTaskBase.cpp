#include "gtest/gtest.h"
#include "../header/TaskBase.h"

using namespace std;

TEST(TaskBase, testConstructor) {
    EXPECT_NO_THROW(TaskBase* task = new TaskBase());
}

TEST(TaskBase, testConstructor_one_word) {
    EXPECT_NO_THROW(TaskBase* task = new TaskBase("checklist"));
}

TEST(TaskBase, testConstructor_sentence) {
    EXPECT_NO_THROW(TaskBase* task = new TaskBase("things i need to do"));
}

TEST(TaskBase, testSetName) {
    TaskBase* task = new TaskBase();
    task->set_name("monday");

    EXPECT_EQ(task->get_name(), "monday");
}

TEST(TaskBase, testSetName_constructor) {
    TaskBase* task = new TaskBase("monday");

    EXPECT_EQ(task->get_name(), "monday");
}

// TEST(TaskBase, testSetName_constructor) {
//     TaskBase* task = new TaskBase("monday");

//     EXPECT_EQ(task->get_name(), "monday");
// }

TEST(TaskBase, testGetId) {
    TaskBase* task = new TaskBase();

    EXPECT_EQ(task->get_id(), 0);
}

// uncomment when implemented sql
/* TEST(TaskBase, testGenerateId) {
    TaskBase* task = new TaskBase("clear");

    EXPECT_EQ(task->getId(), 0)
 }
 */