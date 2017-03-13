#include "Park.h"

Park::Park(string s) : Facility() {
    type = "park";
    animalPtr = nullptr;
}

Park::Park(const Park& P) {
    type = P.type;
    animalPtr = nullptr;
}

Park::~Park() {
    // DO NOTHING
}

Park& Park::operator=(const Park& P) {
    type = P.type;
    animalPtr = nullptr;
    return *this;
}