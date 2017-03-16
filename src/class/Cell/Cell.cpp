#include "Cell.h"

Cell::Cell(int x, int y, string type_, Animal* A, int id, char symbol_, string name_) {
    LocX = x;
    LocY = y;
    type = type_;
    animalPtr = A;
    cage_id = id;
    symbol = symbol_;
    name = name_;
}

Cell::Cell(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
    cage_id = C.cage_id;
    symbol = C.symbol;
}

Cell::~Cell() {
 // do nothing
 delete animalPtr;
}

Cell& Cell::operator=(const Cell& C) {
  if(this!=&C) {
     LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
    cage_id = C.cage_id;
    symbol = C.symbol;
  }
    return *this;
}

ostream& operator<<(ostream& os, const Cell& C) {
    if(C.animalPtr == nullptr) {
        if(C.type.compare("Restaurant") == 0) {
        os << 'R';
        } else if(C.type.compare("Road") == 0) {
            if(C.name.compare("RoadEntrance") == 0 || C.name.compare("RoadExit")) {
                os << '_';
            } else {
                os << ' ';
            }
        } else if(C.type.compare("Park") == 0) {
            os << 'P';
        } else if(C.type.compare("LandHabitat") == 0) {
            os << 'x';
        } else if(C.type.compare("WaterHabitat") == 0) {
            os << '~';
        } else if(C.type.compare("FlyingHabitat") == 0) {
            os << 'O';
        } else {
            os << ' ';
        }
    } else {
        os << C.animalPtr->GetSymbol();
    }
    
    return os;
}

int Cell::getLocX() {
	return LocX;
}

int Cell::getLocY() {
	return LocY;
}

string Cell::getCellType(){
    return type;
}

Animal* Cell::getAnimalPtr(){
    return animalPtr;
}

int Cell::GetCageId () {
    return cage_id;
}

char Cell::GetSymbol() {
    return symbol;
}

void Cell::setLocX(int x) {
	LocX = x;
}

void Cell::setLocY(int y) {
	LocY = y;
}

void Cell::setType(string s){
    type = s;
}

void Cell::setAnimalPtr(Animal* A){
    animalPtr = A;
}

void Cell::SetCageId (int i) {
    cage_id = i;
}

void Cell::SetSymbol(char c) {
    symbol = c;
}