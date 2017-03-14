#include "Eagle.h"

Eagle::Eagle(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
		Aves(x_,y_,"Eagle",tamed_,weight_,foodtype_,habitat)
{

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

void Eagle::interact()
{
	std::cout << "Hieeeekkkk" << std::endl;
}

ostream& operator<< (ostream& os, const Eagle& E){
	os << 'e';
	return os;
}

char Eagle :: GetSymbol() {
	return 'e';
}