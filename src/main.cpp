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
    //Zoo zoo_(40);
    ifstream input("./bin/data/base.vze");
    cin >> n;
    int status = ConfigStore::Get().ParseFile(input,n);
    if(status != -1) {
    	cout << "1:" << endl;
        cout << Zoo::Get(n) << endl;

        Zoo::Get(n).update();
        cout << "2:" << endl;
        cout << Zoo::Get(n) << endl;

    }
    return 0;
}