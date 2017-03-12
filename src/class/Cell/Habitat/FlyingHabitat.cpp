#include "FlyingHabitat.h"

FlyingHabitat::FlyingHabitat() {
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