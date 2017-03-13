#include "Cell.h"

Cell::Cell(int x, int y, string type_, Animal* A, int id) {
    LocX = x;
    LocY = y;
    type = type_;
    animalPtr = A;
    cage_id = id;
}

Cell::Cell(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
    cage_id = C.cage_id;
}

Cell::~Cell() {
 // do nothing
}

Cell& Cell::operator=(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
    type = C.type;
    animalPtr = C.animalPtr;
    cage_id = C.cage_id;
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

int Cell::GetCageId () {
    return cage_id;
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