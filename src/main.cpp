#include <fstream>
#include <unistd.h>
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
    ifstream input("./data/base.vze");
    cin >> n;
    if(ConfigStore::Get().ParseFile(input,n) != -1) {
        cout << Zoo::Get(n);
    }
    return 0;
}