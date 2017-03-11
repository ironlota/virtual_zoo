#include "Zoo.h"

Zoo::Zoo(int n, string filePath) : maxCell(n) {
    
}

Zoo::Zoo(const Zoo& Z) : maxCell(Z.maxCell) {

}

Zoo::~Zoo() {
    
}

Zoo& Zoo::operator=(const Zoo& Z) {

}

ostream& operator<<(ostream& os, const Zoo& Z) {

}