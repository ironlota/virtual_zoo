#include "BirdOfParadise.h"

BirdOfParadise::BirdOfParadise(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
            Aves(x_, y_, "BirdOfParadise", tamed_, weight_, foodtype_, habitat) {

}

BirdOfParadise::BirdOfParadise(const BirdOfParadise& H) : Aves(H) {
    
}

BirdOfParadise::~BirdOfParadise() {
    
}

BirdOfParadise& BirdOfParadise::operator= (const BirdOfParadise& H) {
  Aves::operator=(H);
}

void BirdOfParadise::Interact() {
  std::cout << "prrrrrrrrr" << std::endl;
}

ostream& operator<< (ostream& os, const BirdOfParadise& B) {
  os << 'b';
  return os;
}

char BirdOfParadise :: GetSymbol() {
  return 'b';
}