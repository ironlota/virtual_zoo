#include "Cell.h"

Cell::Cell(int x, int y) {
    LocX = x;
    LocY = y;
}

Cell::Cell(const Cell& C) {
    LocX = C.LocX;
    LocY = C.LocY;
}

Cell::~Cell() {
 // do nothing
}

Cell& Cell::operator=(const Cell&) {
    //do nothing
}

ostream& operator<<(ostream& os, const Cell& C) {

}

int Cell::getLocX() {
	return LocX;
}

int Cell::getLocY() {
	return LocY;
}