#include "Hawk.h"

Hawk::Hawk(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Hawk::Hawk(const Hawk& H)
{
	
}

Hawk::~Hawk()
{
	//do nothing
}

Hawk& Hawk::operator= (const Hawk& H)
{
	//Aves::operator=(H);
}

void Hawk::interact()
{
	std::cout << "Awwwkkkkkkk" << std::endl;
}

ostream& operator<< (ostream& os, const Hawk&){
	os << 'h';
	return os;
}

char Hawk::GetSymbol() {
	return 'k';
}