#include "Park.h"

Park::Park(string s) {
    name = s;
    type = "park";
    animalPtr = nullptr;
}

Park::Park(const Park& P) {
    type = P.type;
    name = P.name;
    animalPtr = nullptr;
}

Park::~Park() {
    // DO NOTHING
}

Park& Park::operator=(const Park& P) {
    name = P.name;
    type = P.type;
    animalPtr = nullptr;
    return *this;
}