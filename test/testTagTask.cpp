#include "gtest/gtest.h"
#include "../header/TagTask.h"
#include "../header/TaskBase.h"
#include "../header/DateTimeTask.h"
#include "../header/Tag.h"

using namespace std;

TEST(TagTask, testDefaultConstructor) {
    EXPECT_NO_THROW(TagTask* task = new TagTask());
}

TEST(TagTask, testDefaultConstructorInput) {
    DateTimeTask* base = new DateTimeTask();
    base->add_date("10/30/2023");
    EXPECT_NO_THROW(TagTask* task = new TagTask(base));
}
TEST(TagTask, testDefaultConstructorInput2) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    EXPECT_NO_THROW(TagTask* task = new TagTask(base));
}
TEST(TagTask, testaddTask) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    TagTask* task = new TagTask(base);
    EXPECT_NO_THROW(task->add_tag("School"));
}
TEST(TagTask, testaddTaskFail) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    TagTask* task = new TagTask(base);
    task->add_tag("Personal");
    task->add_tag("Wait");
    task->add_tag("Work");
    task->add_tag("Pets");
    task->add_tag("Home");
    task->add_tag("Total");
    task->add_tag("Filler");
    task->add_tag("A");
    task->add_tag("B");
    task->add_tag("C");
    EXPECT_THROW(task->add_tag("School"), out_of_range);
}
TEST(TagTask, testdeleteTask) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    TagTask* task = new TagTask(base);
    task->add_tag("Personal");
    EXPECT_NO_THROW(task->delete_tag("Personal"));
}
TEST(TagTask, testdeleteTask2) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    TagTask* task = new TagTask(base);
    task->add_tag("Personal");
    task->add_tag("school");
    EXPECT_NO_THROW(task->delete_tag("Personal"));
}

TEST(TagTask, testdeleteTaskFail) {
    DateTimeTask* base = new DateTimeTask("10/30/2023");
    TagTask* task = new TagTask(base);
    task->add_tag("Personal");
    EXPECT_THROW(task->delete_tag("School"), invalid_argument);
}