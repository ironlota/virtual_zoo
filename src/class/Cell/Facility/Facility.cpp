#include "Facility.h"

Facility::Facility(int x, int y, string type, Animal* animalPtr, int id, string name_) : Cell(x,y,type,nullptr,-1) {
    name = name_;
}

Facility::Facility(const Facility& F) : Cell(F) {

}

Facility::~Facility() {
    //do nothing
}

Facility& Facility::operator=(const Facility& F) { 
}

ostream& operator<<(ostream& os, const Facility& F) {

}