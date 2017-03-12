#include "Owl.h"

Owl::Owl(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
	Aves(x_,y_,"Owl",tamed_,weight_,foodtype_,habitat)
{

}

Owl::Owl(const Owl& H) : Aves(H)
{
	
}

Owl::~Owl()
{
	//do nothing
}

Owl& Owl::operator= (const Owl& H)
{
	Aves::operator=(H);
}

void Owl::interact()
{
	std::cout << "Huuukkk" << std::endl;
}