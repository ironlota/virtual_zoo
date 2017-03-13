#include "Road.h"

Road::Road(string s) : Facility (){
    type = "road";
    animalPtr = nullptr;
}

Road::Road(const Road& R) {
    type = R.type;
    animalPtr = nullptr;
}

Road::~Road() {
    // do nothing
}

Road& Road::operator=(const Road& R) {
    type = R.type;
    animalPtr = nullptr;
    return *this;
}