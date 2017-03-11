#include "Restaurant.h"

Restaurant::Restaurant(string s) {
    name = s;
}

Restaurant::Restaurant(const Restaurant& R) {
    name = R.name;
}

Restaurant::~Restaurant() {
    // DO NOTHING
}

Restaurant& Restaurant::operator=(const Restaurant& R) {
    name = R.name;
}