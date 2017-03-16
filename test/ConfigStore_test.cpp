#include "../src/class/Zoo.h"
#include "../src/class/ConfigStore/ConfigStore.h"
#include <gtest/gtest.h>

class ConfigTest : public ::testing::Test {
  protected:
    ConfigTest(){}
};

TEST(ConfigTest, ConfigStore) {
  Zoo::Get(40);
  EXPECT_EQ(40, Zoo::Get(40).getMaxCell());
  EXPECT_NE(Zoo::Get(40).getCell(0,0)->GetName(), "");
  EXPECT_EQ(Zoo::Get(40).getCell(0,0)->getAnimalPtr(), nullptr);
}
