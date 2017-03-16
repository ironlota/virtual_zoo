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

void Animal::Interact(){
	
}

int Animal::move(bool Up, bool Down, bool Right, bool Left) {
    if (Up) {
    	return UP;
    } else if(Down) {
    	return DOWN;
    } else if(Right) {
    	return RIGHT;
    } else if(Left) {
    	return LEFT;
    } else {
    	return -1; 
    }

    //TODO harus bikin algoritma random yang lebih baik...
}

char Animal :: GetSymbol() {
	if(name.compare("AfricanFrog") == 0) {
		return 'a';
	} else if(name.compare("Bear") == 0 || name.compare("BirdOfParadise") == 0) {
		return 'b';
	} else if(name.compare("Caecilia") == 0) {
		return 'c';
	} else if(name.compare("Deer") == 0) {
		return 'd';
	} else if(name.compare("Eagle") == 0 || name.compare("Exolotl") == 0) {
		return 'e';
	} else if(name.compare("Elephant") == 0) {
		return 'n';
	} else if(name.compare("FlyingFish") == 0) {
		return 'y';
	} else if(name.compare("Girrafe") == 0) {
		return 'g';
	} else if(name.compare("Hawk") == 0) {
		return 'k';
	} else if(name.compare("Lion") == 0) {
		return 'l';
	} else if(name.compare("Mantaray") == 0) {
		return 'm';
	} else if(name.compare("Ostrich") == 0) {
		return 'i';
	} else if(name.compare("Owl") == 0) {
		return 'o';
	} else if(name.compare("Peacock") == 0 || name.compare("Piranha") == 0) {
		return 'p';
	} else if(name.compare("Salamander") == 0) {
		return 'r';
	} else if(name.compare("Seahorse") == 0) {
		return 'h';
	} else if(name.compare("Shark") == 0) {
		return 's';
	} else if(name.compare("Starfish") == 0) {
		return 'f';
	} else if(name.compare("Tiger") == 0) {
		return 't';
	}
}