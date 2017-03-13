#include "Restaurant.h"

Restaurant::Restaurant(string s) {
    name = s;
    type = "restaurant";
    animalPtr = nullptr;
}

Restaurant::Restaurant(const Restaurant& R) {
    name = R.name;
    type = R.type;
    animalPtr = nullptr;
}

Restaurant::~Restaurant() {
    // DO NOTHING
}

Restaurant& Restaurant::operator=(const Restaurant& R) {
    name = R.name;
    type = R.type;
    animalPtr = nullptr;
    return *this;
}