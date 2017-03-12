#include "Tiger.h"

Tiger::Tiger()
{
	name = "Tiger";
}

Tiger::Tiger(const Tiger& H) : Mamalia(H)
{
	
}

Tiger::~Tiger()
{
	//do nothing
}

Tiger& Tiger::operator= (const Tiger& H)
{
	Mamalia::operator=(H);
}