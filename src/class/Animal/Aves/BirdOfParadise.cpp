#include "BirdOfParadise.h"

BirdOfParadise::BirdOfParadise()
{
	name = "BirdOfParadise";
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