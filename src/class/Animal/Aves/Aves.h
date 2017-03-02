#ifndef AVES_H
#define AVES_H

#include <iostream>

using namespace std;

/** @class Aves
  * Aves merupakan ...
*/
class Aves {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Aves();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Aves(const Aves&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Aves();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Aves& operator=(const Aves&);
};

#endif