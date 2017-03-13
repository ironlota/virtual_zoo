#include "LandHabitat.h"

LandHabitat::LandHabitat(int x, int y, string name, Animal* animalPtr, int id) : Habitat(x,y,name,animalPtr,id) {
    type = "LandHabitat";
}

LandHabitat::LandHabitat(const LandHabitat& L) {
    type = L.type;
}

LandHabitat::~LandHabitat() {
    // do nothing
}

LandHabitat& LandHabitat::operator=(const LandHabitat& L) {
    type = L.type;
    return *this;
}