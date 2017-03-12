#include "Caecilia.h"

Caecilia::Caecilia()
{
	name = "Caecilia";
}

Caecilia::Caecilia(const Caecilia& H) : Amphibi(H)
{
	
}

Caecilia::~Caecilia()
{
	//do nothing
}

Caecilia& Caecilia::operator= (const Caecilia& H)
{
	Amphibi::operator=(H);
}