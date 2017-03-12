#include <iostream>
#include "./class/Zoo.h"
/**
*   Class included :
*   - Zoo
*   - Animal
*/
using namespace std;

int main() {
    Zoo zoo_(50);
    Zoo zoos(50);
    cout << zoo_.getCell(1,1)->getLocX() << endl;
    zoos = zoo_;
    cout << zoos.getCell(1,1)->getLocX() << endl;
    return 0;
}