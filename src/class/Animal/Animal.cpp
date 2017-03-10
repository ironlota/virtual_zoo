#include "Animal.h"
#include <iostream>

using namespace std;
  
Animal::Animal() {

}

Animal::Animal(const Animal&) {

}

Animal::~Animal() {

}

Animal& Animal::operator=(const Animal&) {

}

moveList Animal::move() {
    moveList mov = static_cast<moveList>(rand() % NUM_MOVE);
    return mov;
}
