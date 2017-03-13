#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

/** @class Config
* Config merupakan kelas loader and parser untuk melakukan pengambilan konfigurasi dari file eksternal
*/

struct cage {
    int x;
    int y;
    int id;
};

class ConfigStore {
    public:
    /** @brief get
    * Mengembalikan configuration class
    */
    static ConfigStore& get()
    {
        static ConfigStore instance;
        return instance;
    }
    /** @brief parseFile
    * Load dan parsing file konfigurasi eksternal
    */
    int parseFile(std::ifstream& inStream);

    /** @brief getValue
    * Mengembalikan value dari key yang diinput
    */
    template<typename _T>
    _T getValue(std::string key);

    private:
    /** @brief Constructor.
    * Melakukan inisialisasi kelas
    */
    ConfigStore(){};
    /** @brief Copy Constructor.
    * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
    */ 
    ConfigStore(const ConfigStore&);
    /** @brief Operator =
    * Melakukan inisialisasi kelas dengan operator =
    */ 
    ConfigStore& operator=(const ConfigStore&);
    vector<cage> cageVec;
    std::map<std::string,std::string> storedConfig;
};

void removeCharsFromString( string&, char*);

#endif