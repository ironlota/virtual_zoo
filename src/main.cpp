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
    //Zoo zoo_(40);
    ifstream input("./bin/data/base.vze");
    cin >> n;
    int status = ConfigStore::Get().ParseFile(input,n);
    if(status != -1) {
    	cout << Zoo::Get(n) << endl;

        while(1){
            Zoo::Get(n).update();
            cout << Zoo::Get(n) << endl;
            usleep(1000000);
            system("clear");
        }
        //Zoo::Get(n).GetAnimal(10,17);
        //cout << (Zoo::Get(n).GetAnimal(17,10)) << endl;
    }
    return 0;
}