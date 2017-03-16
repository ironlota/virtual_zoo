#include "Bear.h"

Bear::Bear(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
          Mamalia(x_, y_, "Bear", tamed_, weight_,foodtype_,habitat) {
}

Bear::Bear(const Bear& H) : Mamalia(H)
{
  
}

Bear::~Bear()
{
  //do nothing
}

Bear& Bear::operator= (const Bear& H)
{
  Mamalia::operator=(H);
}


void Bear::Interact()
{
  std::cout << "Groooowll" << endl;
}

ostream& operator<< (ostream& os, const Bear& B) {
  os << 'b';
  return os;
}

char Bear :: GetSymbol() {
  return 'b';
}