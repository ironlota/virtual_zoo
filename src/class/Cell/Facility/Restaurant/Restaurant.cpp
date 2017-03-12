#include "Restaurant.h"

Restaurant::Restaurant(string s) {
    name = s;
    type = "restaurant";
}

Restaurant::Restaurant(const Restaurant& R) {
    name = R.name;
    type = R.type;
}

Restaurant::~Restaurant() {
    // DO NOTHING
}

Restaurant& Restaurant::operator=(const Restaurant& R) {
    name = R.name;
    type = R.type;
    return *this;
}