#ifndef HABITAT_H
#define HABITAT_H

#include <iostream>
#include "../Cell.h"
using namespace std;

/** @class Habitat
  * Habitat merupakan ...
*/
class Habitat : public Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Habitat();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Habitat(const Habitat&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Habitat();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Habitat& operator=(const Habitat&);
        /** @brief getIdCage
        * Mengembalikan int idCage
        */
        int getIdCage() {
            return idCage;
        }
    private:
        int idCage;
};

#endif