#include "Facility.h"

Facility::Facility() : Cell(0,0,"",nullptr,-1) {
    //TODO define the passing arguments
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