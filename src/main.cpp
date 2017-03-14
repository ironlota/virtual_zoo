#include <fstream>
#include <unistd.h>
#include <thread>
#include <time.h>
#include <atomic>
#include "./class/Zoo.h"
#include "./class/ConfigStore/ConfigStore.h"

using namespace std;
/**
*   Class included :
*   - Zoo
*   - Animal
*/

atomic_bool keyIsPressed(false);

using namespace std;

int n;

// The function that has the loop.
/*void loopFunction()
{
    while (!ConfigStore::Get().pause) {
            Zoo::Get(n).update();
                cout << Zoo::Get(n) << endl;
                #ifdef _WIN32
                    sleep(1);
                    system("cls");
                #elif __linux__
                    usleep(1000000);
                    system("clear");
                #endif
    }
}*/

int main() {
    srand (time(NULL));
  //Zoo zoo_(40);
  ifstream input("./bin/data/base.vze");
    cin >> n;
    string s,command;
    int status = ConfigStore::Get().ParseFile(input,n);
    if(status != -1) {
    	cout << Zoo::Get(n) << endl;
        while(ConfigStore::Get().run){
            /*thread loopThread = thread(loopFunction);
            #ifdef _WIN32
                system("pause");
            #else
                system("read -n1");
                cin >> command;
            #endif
            ConfigStore::Get().pause = !ConfigStore::Get().pause;
            loopThread.join();*/
                while (!ConfigStore::Get().pause) {
            Zoo::Get(n).update();
                cout << Zoo::Get(n) << endl;
                #ifdef _WIN32
                    sleep(1);
                    system("cls");
                #elif __linux__
                    usleep(1000000);
                    system("clear");
                #endif
    }
        }
        
    }
    return 0;
}