#include "FlyingHabitat.h"

FlyingHabitat::FlyingHabitat() {
    name = "FlyingHabitat";
}

FlyingHabitat::FlyingHabitat(const FlyingHabitat& F) {
    name = F.name;
}

FlyingHabitat::~FlyingHabitat() {
    // do nothing
}

FlyingHabitat& FlyingHabitat::operator=(const FlyingHabitat& F) {
    name = F.name;
    return *this;
}