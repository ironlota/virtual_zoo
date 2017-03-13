#include "Restaurant.h"

Restaurant::Restaurant(int x, int y, string type, Animal* animalPtr, int id, string name_) : Facility (x,y,type,animalPtr,id,name_) {

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