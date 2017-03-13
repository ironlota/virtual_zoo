#include "FlyingHabitat.h"

FlyingHabitat::FlyingHabitat(int x, int y, string name, Animal* animalPtr, int id) : Habitat(x,y,name,animalPtr,id) {
    type = "FlyingHabitat";
}

FlyingHabitat::FlyingHabitat(const FlyingHabitat& F) {
    type = F.type;
}

FlyingHabitat::~FlyingHabitat() {
    // do nothing
}

FlyingHabitat& FlyingHabitat::operator=(const FlyingHabitat& F) {
    type = F.type;
    return *this;
}