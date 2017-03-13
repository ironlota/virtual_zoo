#include "Habitat.h"

Habitat::Habitat() : Cell() {
    
}

Habitat::Habitat(const Habitat& H) : Cell(H) {

}

Habitat::~Habitat() {
    delete animalPtr;
}

Habitat& Habitat::operator=(const Habitat& H) {
    
}