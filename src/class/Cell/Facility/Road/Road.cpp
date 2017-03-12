#include "Road.h"

Road::Road(string s) {
    name = s;
    type = "road";
}

Road::Road(const Road& R) {
    name = R.name;
    type = R.type;
}

Road::~Road() {
    // do nothing
}

Road& Road::operator=(const Road& R) {
    name = R.name;
    type = R.type;
    return *this;
}