#include "gtest/gtest.h"
#include "../header/SubFeat00_Desc.h"
#include "../header/subFeatureList.h"
#include "../header/subFeatureTask.h"
#include "../header/TaskSubFeatBase.h"
#include <iostream>
using namespace std;

TEST(SubFeat00_Desc, test_description1){
    EXPECT_NO_THROW(editDesc("Descsription 1."));
}

TEST(SubFeat00_Desc, test_description2){
    EXPECT_DEATH(editDesc(2));
}

TEST(SubFeat00_Desc, test_name1){
    EXPECT_NO_THROW(editName("Name 1"));
}

TEST(SubFeat00_Desc, test_name2){
    EXPECT_Death(editName(3));
}