#ifndef MAMALIA_H
#define MAMALIA_H

#include <iostream>

using namespace std;

/** @class Mamalia
  * Mamalia merupakan ...
*/
class Mamalia {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Mamalia();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Mamalia(const Mamalia&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Mamalia();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Mamalia& operator=(const Mamalia&);
};

#endif