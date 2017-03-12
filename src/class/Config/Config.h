#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
using namespace std;

/** @class Config
* Config merupakan kelas loader and parser untuk melakukan pengambilan konfigurasi dari file eksternal
*/
class ConfigStore {
    public:
    /** @brief get
    * Mengembalikan configuration class
    */
    static Config& get()
    {
        static Config instance;
        return instance;
    }
    /** @brief parseFile
    * Load dan parsing file konfigurasi eksternal
    */
    void parseFile(std::ifstream& inStream);

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
    std::map<std::string,std::string> storedConfig;
};
#endif