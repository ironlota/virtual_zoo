#include "FlyingFish.h"

FlyingFish::FlyingFish(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

FlyingFish::FlyingFish(const FlyingFish& H)
{
	
}

FlyingFish::~FlyingFish()
{
	//do nothing
}

FlyingFish& FlyingFish::operator= (const FlyingFish& H)
{
	
}

void FlyingFish::interact()
{
	std::cout << "Wushhh" << std::endl;
}

ostream& operator<< (ostream& os, const FlyingFish& F){
	os << 'f';
	return os;
}

char FlyingFish :: GetSymbol() {
	return 'y';
}