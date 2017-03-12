#include "AfricanFrog.h"

AfricanFrog::AfricanFrog()
{
	name = "AfricanFrog";
}

AfricanFrog::AfricanFrog(const AfricanFrog& H) : Amphibi(H)
{
	
}

AfricanFrog::~AfricanFrog()
{
	//do nothing
}

AfricanFrog& AfricanFrog::operator= (const AfricanFrog& H)
{
	Amphibi::operator=(H);
}