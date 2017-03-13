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
    int status = ConfigStore::Get().ParseFile(input);
    if(status != -1) {
        for(int i = 0; i < ConfigStore::Get().animalVec.size(); i++) {
            cout << ConfigStore::Get().animalVec[i].name << endl;
        }
    }
    return 0;
}