#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include "./Cell/Cell.h"
#include "./Animal/Animal.h"

using namespace std;

/** @class Zoo
  * Zoo merupakan ...
*/
class Zoo {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Zoo();    
        Zoo(string filePath);
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Zoo(const Zoo&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Zoo();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Zoo& operator=(const Zoo&);
    
    private:
        vector<vector<Cell>> cell_;
        vector<Animal> animal_;
        const int maxCell;
        const int maxAnimal;
};

#endif