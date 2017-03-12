#include "Park.h"

Park::Park(string s) {
    name = s;
    type = "park";
}

Park::Park(const Park& P) {
    type = P.type;
    name = P.name;
}

Park::~Park() {
    // DO NOTHING
}

Park& Park::operator=(const Park& P) {
    name = P.name;
    type = P.type;
    return *this;
}