#include "../header/InitializeDatabase.h"
#include<gtest/gtest.h>

TEST(constructorTest, constructor ) {
	EXPECT_NO_THROW(
	InitializeDatabase test(":memory:")
	);
}

TEST(testCreateTable, globalSettingsTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateSettingsTable();
	EXPECT_EQ(status, 0);
}

TEST(testCreateTable, userAccTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateUserAccTable();
	EXPECT_EQ(status, 0);
}

TEST(testCreateTable, userInfoTable) {
	InitializeDatabase test(":memory:");
	int status=test.softCreateUserInfoTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, collectionOfTasksTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateCollectionOfTasksTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, taskTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateTaskTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatDescTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateSubfeatDescTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatListTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateSubfeatListTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatListItemTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateSubfeatListItemTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatFormTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateSubfeatFormTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatFormItemTable){
	InitializeDatabase test(":memory:");
	int status = test.softCreateSubfeatFormItemTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatTagsTable) {
	InitializeDatabase test(":memory:");
	int status = test.softCreateTagsTable();
	EXPECT_EQ(status,0);
}

TEST(testCreateTable, subfeatAllTables) {
	InitializeDatabase test(":memory:");
	int status=test.softCreateAllTables();
	EXPECT_EQ(status,0);
}