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
    Zoo zoo_(40);
    ifstream input("./bin/data/base.vze");
    cin >> n;
    //int status = ConfigStore::Get().ParseFile(input,n);
    //if(status != -1) {
    	cout << "ada" << endl;
        cout << zoo_ << endl;
    //}
    return 0;
}