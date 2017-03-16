#include "Park.h"

Park::Park(int x, int y, string type, Animal* animalPtr, int id, string name_) : Facility (x,y,type,animalPtr,id,name_) {

}

Park::Park(const Park& P) {
    type = P.type;
    animalPtr = nullptr;
}

Park::~Park() {
    // DO NOTHING
}

Park& Park::operator=(const Park& P) {
    type = P.type;
    animalPtr = nullptr;
    return *this;
}