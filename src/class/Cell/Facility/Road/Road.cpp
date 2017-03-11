#include "Road.h"

Road::Road(string s) {
    name = s;
}

Road::Road(const Road& R) {
    name = R.name;
}

Road::~Road() {
    // do nothing
}

Road& Road::operator=(const Road& R) {
    name = R.name;
}