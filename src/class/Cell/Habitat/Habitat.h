#ifndef HABITAT_H
#define HABITAT_H

#include <iostream>
#include "../Cell.h"
#include "../../Animal/Animal.h"
using namespace std;

/** @class Habitat
  * Habitat merupakan cell yang merepresentasikan tempat tinggal dari suatu hewan
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

    protected:
        int idCage;
};

#endif