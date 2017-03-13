#include "WaterHabitat.h"

WaterHabitat::WaterHabitat(int x, int y, string name, Animal* animalPtr, int id) : Habitat(x,y,name,animalPtr,id) {
    type = "WaterHabitat";
}

WaterHabitat::WaterHabitat(const WaterHabitat& W) {
    type = W.type;
}

WaterHabitat::~WaterHabitat() {
    // do nothing
}

WaterHabitat& WaterHabitat::operator=(const WaterHabitat& W) {
    type = W.type;
    return *this;
}