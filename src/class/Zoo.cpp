#include "Zoo.h"

Zoo::Zoo() : maxAnimal(100), maxCell(100) {
    
}
 
Zoo::Zoo(string filePath) : maxAnimal(100), maxCell(100) {

}

Zoo::Zoo(const Zoo& Z) : maxAnimal(100), maxCell(100) {

}

Zoo::~Zoo() {
    
}

Zoo& Zoo::operator=(const Zoo&) {

}