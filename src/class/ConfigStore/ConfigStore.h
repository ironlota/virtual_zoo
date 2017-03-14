#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include "SysAll.h"

using namespace std;

/** @struct cage_temp
 *  @brief struktur untuk menampung data cage sementara
 */
struct cage_temp {
    cage_temp(int x_=0, int y_=0, int id_=0, string habitat_="") {
        x = x_;
        y = y_;
        id = id_;
        habitat = habitat_;
    }
    int x;
    int y;
    int id;
    string habitat;
};

/** @struct facility_temp
 *  @brief struktur untuk menampung data facility sementara
 */
struct facility_temp {
    facility_temp(int x_=0, int y_=0, string type_="", string name_="") {
        x = x_;
        y = y_;
        type = type_;
        name = name_;
    }
    int x;
    int y;
    string type;
    string name;
};

/** @struct animal_temp
 *  @brief struktur untuk menampung data animal sementara
 */
struct animal_temp {
    animal_temp(int x_=0, int y_=0, string name_="", float weight_=0.0, bool tamed_= true, string habitat_="", string foodtype_ = "") {
        x = x_;
        y = y_;
        name = name_;
        weight = weight_;
        tamed = tamed_;
        habitat = habitat_;
        foodtype = foodtype_;
    }
    int x;
    int y;
    string name;
    float weight;
    bool tamed;
    string habitat;
    string foodtype;    
};

/** @class Config
* Config merupakan kelas loader and parser untuk melakukan pengambilan konfigurasi dari file eksternal
*/
class ConfigStore {
    public:
    bool pause = false;
    bool run = true;
    /** @brief get
    * Mengembalikan configuration class
    */
    static ConfigStore& Get()
    {
        static ConfigStore instance;
        return instance;
    }
    /** @brief CopyFileBase
    * Mengembalikan configuration class
    */
    #ifdef _WIN32
        //define something for Windows (32-bit and 64-bit, this part is common)
        void CopyFileBase(char* filePath)
        {
            string tempFile(filePath);
            std::string s = "bin\\virtual_zoo.exe";

            std::string::size_type i = tempFile.find(s);

            if (i != std::string::npos)
                tempFile.erase(i, s.length());

            ifstream source(tempFile+"src/class/ConfigStore/base.vze", ios::binary);
            ofstream dest(tempFile+"bin/data/base.vze", ios::binary);

            dest << source.rdbuf();

            source.close();
            dest.close();

            cout << tempFile << endl;
            //dst << src.rdbuf();
        }
   #elif __linux__
        void CopyFileBase(char* filePath)
        {
            string tempFile(filePath);
            std::string s = "bin\\virtual_zoo";

            std::string::size_type i = tempFile.find(s);

            if (i != std::string::npos)
                tempFile.erase(i, s.length());
            //std::ifstream  src("base.vze", std::ios::binary);
            //std::ofstream  dst(tempFile + "data/base.vze",   std::ios::binary);
            cout << tempFile << endl;
            //dst << src.rdbuf();
        }
   #endif

    /** @brief parseFile
    * Load dan parsing file konfigurasi eksternal
    */
    int ParseFile(std::ifstream& inStream, int n);

    /** @brief parseFile
    * Load dan parsing file konfigurasi eksternal
    */
    void SaveFile(std::ifstream& inStream);

    /** @brief getValue
    * Mengembalikan value dari key yang diinput
    */
    template<typename _T>
    _T GetValue(std::string key);
    private:
    /** @brief Constructor.
    * Melakukan inisialisasi kelas
    */  
    ConfigStore(){};
    /** @brief Copy Constructor.
    * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
    */ 
    ConfigStore(const ConfigStore&) {};
    /** @brief Operator =
    * Melakukan inisialisasi kelas dengan operator =
    */ 
    ConfigStore& operator=(const ConfigStore&) {};
    std::map<std::string,std::string> storedConfig;
    vector<cage_temp> cageVec;
    vector<animal_temp> animalVec;
    vector<facility_temp> facilityVec;
};

#endif