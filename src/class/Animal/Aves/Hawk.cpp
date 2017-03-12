#include "Hawk.h"

Hawk::Hawk()
{
	Animal::name = "Hawk";
}

Hawk::Hawk(const Hawk& H) : Animal(H)
{
	
}

Hawk::~Hawk()
{
	//do nothing
}

Hawk& Hawk::operator= (const Hawk& H)
{
	Animal::operator=(H);
}