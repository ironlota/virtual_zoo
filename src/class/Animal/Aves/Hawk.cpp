#include "Hawk.h"

Hawk::Hawk(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
		Aves(x_,y_,"Hawk",tamed_,weight_,foodtype_,habitat)
{

}

Hawk::Hawk(const Hawk& H) : Aves(H)
{
	
}

Hawk::~Hawk()
{
	//do nothing
}

Hawk& Hawk::operator= (const Hawk& H)
{
	Aves::operator=(H);
}

void Hawk::interact()
{
	std::cout << "Awwwkkkkkkk" << std::endl;
}