#include <fstream>
#include <unistd.h>
#include <thread>
#include <time.h>
#include <atomic>
#include "./class/Zoo.h"
#include "./class/ConfigStore/Util.h"
#include "./class/ConfigStore/ConfigStore.h"

using namespace std;
atomic_bool keyIsPressed(false);

int n;

// The function that has the loop.
void loopFunction()
{
    while (!ConfigStore::Get().pause) {
            Zoo::Get(n).update();
                cout << Zoo::Get(n) << endl;
                clearwait(1);
    }
}

int main() {
    srand (time(NULL));
    int pil;
    ifstream input("./bin/data/base.vze");
    cin >> pil;
    cin >> n;
    if(ConfigStore::Get().ParseFile(input,n) != -1) {
        if(pil == 1) {
                cout << Zoo::Get(n) << endl;
                ofstream output("./bin/data/map.txt");
                output << Zoo::Get(n);
                output.close();
        } else if(pil == 2) {
            Zoo::Get(n).Tour(6,0);
        } else {
            while(ConfigStore::Get().run){
                thread loopThread = thread(loopFunction);
                #ifdef _WIN32
                    system("pause");
                #else
                    system("read -n1");
                #endif
                ConfigStore::Get().pause = !ConfigStore::Get().pause;
                loopThread.join();
            }
        }
    }
    input.close();
    return 0;
}