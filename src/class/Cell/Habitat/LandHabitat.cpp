#include "LandHabitat.h"

LandHabitat::LandHabitat() {
    name = "LandHabitat";
}

LandHabitat::LandHabitat(const LandHabitat& L) {
    name = L.name;
}

LandHabitat::~LandHabitat() {
    // do nothing
}

LandHabitat& LandHabitat::operator=(const LandHabitat& L) {
    name = L.name;
    return *this;
}