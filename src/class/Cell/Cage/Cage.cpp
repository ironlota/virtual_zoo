#include "Cage.h"

Cage::Cage() {
    animal_ = nullptr;
}

Cage::Cage(const Cage& C) : Cell(C) {
    //animal_ = C.animal_;
}

Cage::~Cage() {
    if(animal_ != nullptr) {
        delete animal_;
    }
}

Cage& Cage::operator=(const Cage&) {

}

Animal* Cage::getAnimal() {
    return animal_;
}

moveList Cage::getAnimalMove() {

}