#include <fstream>
#include "./class/Zoo.h"
#include "./class/ConfigStore/ConfigStore.h"
/**
*   Class included :
*   - Zoo
*   - Animal
*/
using namespace std;

int main() {
    Zoo zoo_(50);
    ifstream input("./bin/data/base.vze");
    ConfigStore::get().parseFile(input);
    return 0;
}