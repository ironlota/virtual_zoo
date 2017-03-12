#ifndef AVES_H
#define AVES_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Aves
  * Aves merupakan salah satu kelas binatang yang habitatnya di udara.
*/
class Aves : public Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Aves(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = false, float weight_ = 0, string foodtype_ = 0, string habitat = 0);
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
        /** @brief Interact
        * Prosedure interact yang virtual untuk direalisasikan di turunannya
        */ 
        virtual void interact();
};

#endif