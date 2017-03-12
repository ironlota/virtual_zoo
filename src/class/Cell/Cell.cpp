#include "Cell.h"

Cell::Cell(int x, int y, string name_) {
    LocX = x;
    LocY = y;
    name = name_;
}

Cell::Cell(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
}

Cell::~Cell() {
 // do nothing
}

Cell& Cell::operator=(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
}

ostream& operator<<(ostream& os, const Cell& C) {

}

int Cell::getLocX() {
	return LocX;
}

int Cell::getLocY() {
	return LocY;
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