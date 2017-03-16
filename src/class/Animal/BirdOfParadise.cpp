#include "BirdOfParadise.h"

BirdOfParadise::BirdOfParadise(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

BirdOfParadise::BirdOfParadise(const BirdOfParadise& H){
	
}

BirdOfParadise::~BirdOfParadise()
{
	//do nothing
}

BirdOfParadise& BirdOfParadise::operator= (const BirdOfParadise& H)
{
}

void BirdOfParadise::interact()
{
	std::cout << "prrrrrrrrr" << std::endl;
}

ostream& operator<< (ostream& os, const BirdOfParadise& B){
	os << 'b';
	return os;
}

char BirdOfParadise :: GetSymbol() {
	return 'b';
}