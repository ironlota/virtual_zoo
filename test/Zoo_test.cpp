#include "../src/class/Zoo.h"
#include <gtest/gtest.h>

class ZooTest : public ::testing::Test {
  protected:
    ZooTest(){}
};

TEST(ZooTest, getCell) {
  Zoo zoo_(50);
  Zoo zoos(50);
  EXPECT_EQ(50, zoo_.getMaxCell());
  EXPECT_NE(zoo_.getCell(0,0), zoos.getCell(0,0));
}