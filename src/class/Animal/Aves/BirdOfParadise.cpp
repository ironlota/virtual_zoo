#include "BirdOfParadise.h"

BirdOfParadise::BirdOfParadise(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
			Aves(x_, y_, "BirdOfParadise", tamed_, weight_, foodtype_, habitat)
{

}

BirdOfParadise::BirdOfParadise(const BirdOfParadise& H) : Aves(H)
{
	
}

BirdOfParadise::~BirdOfParadise()
{
	//do nothing
}

BirdOfParadise& BirdOfParadise::operator= (const BirdOfParadise& H)
{
	Aves::operator=(H);
}

void BirdOfParadise::interact()
{
	std::cout << "prrrrrrrrr" << std::endl;
}