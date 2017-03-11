#include "Park.h"

Park::Park(string s) {
    name = s;
}

Park::Park(const Park& P) {
    name = P.name;
}

Park::~Park() {
    // DO NOTHING
}

Park& Park::operator=(const Park& P) {
    name = P.name;
}