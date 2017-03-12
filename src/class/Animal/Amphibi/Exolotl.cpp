#include "Exolotl.h"

Exolotl::Exolotl()
{
	name = "Exolotl";
}

Exolotl::Exolotl(const Exolotl& H) : Amphibi(H)
{
	
}

Exolotl::~Exolotl()
{
	//do nothing
}

Exolotl& Exolotl::operator= (const Exolotl& H)
{
	Amphibi::operator=(H);
}