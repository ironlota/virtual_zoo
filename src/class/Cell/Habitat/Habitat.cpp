#include "Habitat.h"

Habitat::Habitat(int x, int y, string name, Animal* animalPtr, int id) : Cell(x,y,name,animalPtr,id) {}

Habitat::Habitat(const Habitat& H) : Cell(H) {

}

Habitat::~Habitat() {
    delete animalPtr;
}

Habitat& Habitat::operator=(const Habitat& H) {
    
}