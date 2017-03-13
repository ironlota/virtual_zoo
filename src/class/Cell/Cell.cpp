#include "Cell.h"

Cell::Cell(int x, int y, string type_, Animal* A) {
    LocX = x;
    LocY = y;
    type = type_;
    animalPtr = A;
}

Cell::Cell(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
}

Cell::~Cell() {
 // do nothing
}

Cell& Cell::operator=(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
}

ostream& operator<<(ostream& os, const Cell& C) {

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

void Cell::setLocX(int x) {
	LocX = x;
}

void Cell::setLocY(int y) {
	LocY = y;
}

void Cell::setType(string s){
    type = s;
}