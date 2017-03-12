#include "Eagle.h"

Eagle::Eagle()
{
	name = "Eagle";
}

Eagle::Eagle(const Eagle& H) : Aves(H)
{
	
}

Eagle::~Eagle()
{
	//do nothing
}

Eagle& Eagle::operator= (const Eagle& H)
{
	Aves::operator=(H);
}