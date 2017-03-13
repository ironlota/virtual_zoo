#include "Habitat.h"

Habitat::Habitat() {
    animalPtr = nullptr;
}

Habitat::Habitat(const Habitat& H) {

}

Habitat::~Habitat() {
    delete animalPtr;
}

Habitat& Habitat::operator=(const Habitat& H) {
    
}