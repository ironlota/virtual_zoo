#include "Lion.h"

Lion::Lion()
{
	name = "Lion";
}

Lion::Lion(const Lion& H) : Mamalia(H)
{
	
}

Lion::~Lion()
{
	//do nothing
}

Lion& Lion::operator= (const Lion& H)
{
	Mamalia::operator=(H);
}