#include "Elephant.h"

Elephant::Elephant()
{
	name = "Elephant";
}

Elephant::Elephant(const Elephant& H) : Mamalia(H)
{
	
}

Elephant::~Elephant()
{
	//do nothing
}

Elephant& Elephant::operator= (const Elephant& H)
{
	Mamalia::operator=(H);
}