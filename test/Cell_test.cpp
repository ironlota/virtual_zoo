#include "../src/class/Cell/Cell.h"
#include "../src/class/Cell/Facility/Facility.h"
#include "../src/class/Cell/Facility/Park/Park.h"
#include "../src/class/Cell/Habitat/Habitat.h"
#include "../src/class/Cell/Habitat/LandHabitat.h"
#include <gtest/gtest.h>

class CellTest : public ::testing::Test {
  protected:
    CellTest(){}
};

class FacilityTest : public ::testing::Test {
  protected:
    FacilityTest(){}
};

class HabitatTest : public ::testing::Test {
  protected:
    HabitatTest(){}
};

class ParkTest : public ::testing::Test {
  protected:
    ParkTest(){}
};

class LandHabitatTest : public ::testing::Test {
  protected:
    LandHabitatTest(){}
};

TEST(CellTest, Cell) {
  Cell cell1(4,4,"Unknown",nullptr);
  Cell cell2(5,5,"Known",nullptr);
  cell2 = cell1;
  EXPECT_EQ(4, cell1.getLocX());
  EXPECT_EQ(cell1.getLocX(), cell1.getLocY());
  EXPECT_EQ("Unknown", cell1.getCellType());
  EXPECT_EQ(cell2.getLocX(), cell1.getLocX());
}

TEST(FacilityTest, Facility) {
  Cell *C1;
  Facility *f1 = new Facility(5,3,"Road1",nullptr,-1,"Jalan Genesha");
  C1 = f1;
  C1->setType("Road1");
  EXPECT_EQ(f1->GetCageId() , -1);
  EXPECT_EQ(f1->getCellType() , "Road1");
}

TEST(HabitatTest, Habitat) {
  Cell *c1;
  Habitat *h1 = new Habitat(4,4,"Habitat1",nullptr,-1);
  c1 = h1;
  c1->setType("Habitat1");
  c1->SetCageId(5);
  EXPECT_EQ(h1->GetCageId() , 5);
  EXPECT_EQ(h1->getCellType() , "Habitat1");
}

TEST(ParkTest, Park) {
  Facility *f_test;
  Park *p1 = new Park(5,5,"park",nullptr,-1,"Puter park");
  f_test = p1;
  EXPECT_EQ( "park", f_test->getCellType());
  EXPECT_EQ( 0 , f_test->getLocX());
}

TEST(LandHabitatTest, LandHabitat) {
  Habitat *h_test;
  LandHabitat *l1 = new LandHabitat(1,1,"LandHabitat",nullptr,5); //sebetulnya parameter string ga guna
  h_test = l1;
  EXPECT_EQ( "LandHabitat", h_test->getCellType());
  EXPECT_EQ( 0 , h_test->getLocX());
}
