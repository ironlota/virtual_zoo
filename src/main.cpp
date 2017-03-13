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
    int n;
    Zoo zoo_(50);
    ifstream input("./bin/data/base.vze");
    cin >> n;
    int status = ConfigStore::Get().ParseFile(input,n);
    if(status != -1) {
        for(int i = 0; i < ConfigStore::Get().animalVec.size(); i++) {
            cout << ConfigStore::Get().animalVec[i].name << endl;
        }
    }
    cout << Zoo::Get(n).getCell(3,15)->getCellType() << endl;
    return 0;
}