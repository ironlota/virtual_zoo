#include "Animal.h"
#include <iostream>

using namespace std;
  
Animal::Animal(int x_, int y_, string name_, bool tamed_, float weight_, string	foodtype_, string habitat) {
	x = x_;
	y = y_;
	name = name_;
	tamed = tamed_;
	weight = weight_;
	foodtype = foodtype_;
	livingHabitat = habitat;
}

Animal::Animal(const Animal& A) {
	x = A.x;
	y = A.y;
	name = A.name;
	tamed = A.tamed;
	weight = A.weight;
	foodtype = A.foodtype;
	livingHabitat = A.livingHabitat;
}

Animal::~Animal() {
	//do nothing
}

Animal& Animal::operator=(const Animal& A) {
	if(this != &A)
	{
		x = A.x;
		y = A.y;
		name = A.name;
		tamed = A.tamed;
		weight = A.weight;
		foodtype = A.foodtype;
		livingHabitat = A.livingHabitat;
	}
	return *this;	
}

moveList Animal::move() {
    moveList mov = static_cast<moveList>(rand() % NUM_MOVE);
    return mov;
}
