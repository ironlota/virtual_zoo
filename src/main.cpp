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
        cout << Zoo::Get(n).getCell(6,2)->GetName() << endl;
    }
    return 0;
}