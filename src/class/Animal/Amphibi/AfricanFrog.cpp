#include "AfricanFrog.h"

AfricanFrog::AfricanFrog(int x_, int y_, bool tamed_, float weight_, string foodype_, string habitat) : 
				  Amphibi(x_, y_, "AfricanFrog", tamed_, weight_, foodype_, habitat)
{

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

void AfricanFrog::interact()
{
	std::cout << "Krokok" << std::endl;
}