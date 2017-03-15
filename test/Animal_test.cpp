#include "../src/class/Animal/Animal.h"
#include "../src/class/Animal/Amphibi/Amphibi.h"
#include "../src/class/Animal/Amphibi/Salamander.h"
#include "../src/class/Animal/Mamalia/Mamalia.h"
#include "../src/class/Animal/Mamalia/Deer.h"
#include <gtest/gtest.h>

class AnimalTest : public ::testing::Test {
  protected:
    AnimalTest(){}
};

class AmphibiTest : public ::testing::Test {
  protected:
    AmphibiTest(){}
};

class SalamanderTest : public ::testing::Test {
  protected:
    SalamanderTest(){}
};

class MamaliaTest : public ::testing::Test {
  protected:
    MamaliaTest(){}
};

class DeerTest : public ::testing::Test {
  protected:
    DeerTest(){}
};

TEST(AmphibiTest, Amphibi) {
  Amphibi *a1 = new Amphibi();
  Animal *a_head;
  a_head = a1;
  a_head->SetHabitat("Land | Water");
  EXPECT_EQ(a1->GetTamed() , false);
  EXPECT_EQ(a1->GetHabitat() , "Land | Water");
}

TEST(MamaliaTest, Mamalia) {
  Mamalia *a1 = new Mamalia();
  Animal *a_head;
  a_head = a1;
  a_head->SetHabitat("Land");
  EXPECT_EQ(a1->GetTamed() , false);
  EXPECT_EQ(a1->GetHabitat() , "Land");
}

TEST(SalamanderTest, Salamander) {
  Amphibi *a1;
  Salamander *p1 = new Salamander(3,5,true,1,"Omnivore","Land | Water");
  a1 = p1;
  EXPECT_EQ( "Salamander", p1->GetName());
  EXPECT_EQ( "Omnivore" , p1->GetFoodType());
}

TEST(DeerTest, Deer) {
  Mamalia *a1;
  Deer *p1 = new Deer(3,5,false,50,"Herbivore","Land");
  a1 = p1;
  EXPECT_EQ( "Deer", p1->GetName());
  EXPECT_EQ( "Land" , p1->GetHabitat());
}

TEST(AnimalTest, Animal) {
  Animal *a1;
  Deer *d = new Deer();
  a1 = d;
  a1->SetHabitat("Land");
  EXPECT_EQ(a1->GetName() , "Deer");
  EXPECT_EQ(a1->GetTamed() , false);
  EXPECT_EQ(a1->GetHabitat() , "Land");
}
