#include <iostream>
#include "../src/class/Zoo.h"
#include <gtest/gtest.h>
/**
*   Class included :
*   - Zoo
*   - Animal
*/
using namespace std;

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
