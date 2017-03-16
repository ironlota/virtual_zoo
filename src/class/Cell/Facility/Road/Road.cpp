#include "Road.h"

Road::Road(int x, int y, string type, Animal* animalPtr, int id, string name_) : Facility (x,y,type,animalPtr,id,name_){

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