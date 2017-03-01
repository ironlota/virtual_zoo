#ifndef CAGE_H
#define CAGE_H

#include <iostream>

using namespace std;

/** @class Cage
  * Cage merupakan ...
*/
class Cage {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Cage();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Cage(const Cage&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Cage();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Cage& operator=(const Cage&);
}

#endif