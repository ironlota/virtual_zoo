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

    protected:
        /** @brief Fly
        * Prosedure swim yang virtual untuk direalisasikan di turunannya
        */ 
        void fly();
        /** @brief Interact
        * Prosedure interact yang virtual untuk direalisasikan di turunannya
        */ 
        void interact();
};

#endif