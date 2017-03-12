#ifndef PISCES_H
#define PISCES_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Pisces
  * Pisces merupakan salah satu kelas binatang yang habitatnya di air.
*/
class Pisces : public Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Pisces();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Pisces(const Pisces&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Pisces();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Pisces& operator=(const Pisces&);
    protected:
        /** @brief Swim
        * Prosedure swim yang virtual untuk direalisasikan di turunannya
        */ 
        void swim();
        /** @brief Interact
        * Prosedure interact yang virtual untuk direalisasikan di turunannya
        */ 
        void interact();
};

#endif