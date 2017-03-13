#include "Road.h"

Road::Road(string s) {
    name = s;
    type = "road";
    animalPtr = nullptr;
}

Road::Road(const Road& R) {
    name = R.name;
    type = R.type;
    animalPtr = nullptr;
}

Road::~Road() {
    // do nothing
}

Road& Road::operator=(const Road& R) {
    name = R.name;
    type = R.type;
    animalPtr = nullptr;
    return *this;
}