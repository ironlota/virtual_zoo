#include "Bear.h"

Bear::Bear()
{
	name = "Bear";
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