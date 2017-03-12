#include "Caecilia.h"

Caecilia::Caecilia(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
		Amphibi(x_,y_,"Caecilia",tamed_,weight_,foodtype_,habitat)
{

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

void Caecilia::interact()
{
	std::cout << "Caeciliaaaaa" << std::endl;
}