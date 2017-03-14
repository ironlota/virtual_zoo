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

int Animal::move(bool Up, bool Down, bool Right, bool Left) {
    if(Up)
    {
    	return UP;
    }
    if(Down)
    {
    	return DOWN;
    }
    if(Right)
    {
    	return RIGHT;
    }
    if(Left)
    {
    	return LEFT;
    }

    //TODO harus bikin algoritma random yang lebih baik...
}
/*
ostream& operator<< (ostream& os, const Animal& A){
	return os;
}*/

char Animal :: GetSymbol() {
	
}