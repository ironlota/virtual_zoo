#include "Lion.h"

Lion::Lion(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat){
}

Lion::Lion(const Lion& H)
{
	
}

Lion::~Lion()
{
	//do nothing
}

Lion& Lion::operator= (const Lion& H)
{
	//Mamalia::operator=(H);
}

void Lion::interact()
{
	std::cout << "Hauummmm" << endl;
}

ostream& operator<< (ostream& os, const Lion&) {
	os << 'l';
	return os;
}

char Lion :: GetSymbol() {
	return 'l';
}