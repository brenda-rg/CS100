#include "../header/SQLite_DatabaseConnect.h"

#include<gtest/gtest.h>


TEST(LocalDatabaseConnectInstance, constructor) {
	EXPECT_NO_THROW( DatabaseConnect db("../test/test.db"));
}

TEST(DatabaseConnection, openConnection) {
	DatabaseConnect db(
			"../test/test.db"
			);
	db.openConnection();
	EXPECT_TRUE(db.checkConnection());
	db.closeConnection();
}

TEST(DatabaseConnection, closeConnection) {
	DatabaseConnect db(
		"../test/test.db"
	);
	db.openConnection();
	db.closeConnection();
	EXPECT_FALSE(db.checkConnection());
}