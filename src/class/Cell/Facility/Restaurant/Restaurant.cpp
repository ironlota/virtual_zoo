#include "Restaurant.h"

Restaurant::Restaurant(string s) : Facility() {
    type = "restaurant";
    animalPtr = nullptr;
}

Restaurant::Restaurant(const Restaurant& R) {
    type = R.type;
    animalPtr = nullptr;
}

Restaurant::~Restaurant() {
    // DO NOTHING
}

Restaurant& Restaurant::operator=(const Restaurant& R) {
    type = R.type;
    animalPtr = nullptr;
    return *this;
}