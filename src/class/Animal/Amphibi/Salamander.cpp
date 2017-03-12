#include "Salamander.h"

Salamander::Salamander()
{
	name = "Salamander";
}

Salamander::Salamander(const Salamander& H) : Amphibi(H)
{
	
}

Salamander::~Salamander()
{
	//do nothing
}

Salamander& Salamander::operator= (const Salamander& H)
{
	Amphibi::operator=(H);
}