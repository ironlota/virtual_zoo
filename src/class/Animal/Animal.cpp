#include "Animal.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

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
	    if (!Up && !Down && !Right && Left) {
	    	return -1;
	    } else {
	    	bool found = false;
	    	int random;
		    while (!found) {
	    		random = rand() % 4;
		    	//cout << random << endl;
		    	while (!found) {
		    	if(random == 0) {
		    		if (Up) {
		    			found = true;
		    		}
		    	} else if(random == 1) {
		    		if (Down) {
		    			found = true;
		    		}
		    	} else if(random == 2) {
		    		if (Right) {
		    			found = true;
		    		}
		    	} else if(random == 3) {
		    		if (Left) {
		    			found = true;
		    		}
		    	}
			}
		}
	    return random;
	}
    //TODO harus bikin algoritma random yang lebih baik...
}
/*
ostream& operator<< (ostream& os, const Animal& A){
	return os;
}*/

char Animal :: GetSymbol() {
	
}