#include "../src/Class/Zoo.h"
#include <gtest/gtest.h>

class ZooTest : public ::testing::Test {
  protected:
    ZooTest(){}
};

TEST(ZooTest, getCell) {
  Zoo zoo_(50);
  ASSERT_EQ(60, zoo_.getMaxCell());
  //ASSERT_EQ("Hello World", hello.GetText());
}
