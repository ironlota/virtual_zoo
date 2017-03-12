#ifndef AMPHIBI_H
#define AMPHIBI_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Amphibi
  * Amphibi merupakan ...
*/
class Amphibi : public Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Amphibi();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Amphibi(const Amphibi&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Amphibi();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Amphibi& operator=(const Amphibi&);
};

#endif