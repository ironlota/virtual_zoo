#include "Habitat.h"

Habitat::Habitat() {
    animal = nullptr;
}

Habitat::Habitat(const Habitat& H) {
    animal = nullptr;
    *animal = *H.animal;
}

Habitat::~Habitat() {
    delete animal;
}

Habitat& Habitat::operator=(const Habitat&) {
    delete animal;
}