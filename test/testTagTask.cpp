#include "gtest/gtest.h"
#include "../header/TagTask.h"
#include "../header/TaskBase.h"
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"

using namespace std;

TEST(TagTask, testDefaultConstructor) {
    EXPECT_NO_THROW(TagTask* task = new TagTask());
}
TEST(TagTask, testDefaultConstructor2) {
    TaskBase * base = new TaskBase("modify");
    EXPECT_NO_THROW(TagTask* task = new TagTask(base));
}
TEST(TagTask, testDefaultConstructor3) {
    DateTimeTask* base = new DateTimeTask();
    base->add_date("10/30/2023");
    EXPECT_NO_THROW(TagTask* task = new TagTask(base));
}
TEST(TagTask, testDefaultConstructor4) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    EXPECT_NO_THROW(TagTask* task = new TagTask(base));
}