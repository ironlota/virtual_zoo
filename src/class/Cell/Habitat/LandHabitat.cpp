#include "LandHabitat.h"

LandHabitat::LandHabitat() {
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