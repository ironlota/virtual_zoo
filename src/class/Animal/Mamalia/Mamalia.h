#ifndef MAMALIA_H
#define MAMALIA_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Mamalia
  * Mamalia merupakan ...
*/
class Mamalia : public Animal {
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
    protected:
        /** @brief Move method
        * Melakukan gerakan dari satu cell ke cell lain yang masih berada pada satu cage
        */
        void move();
        /** @brief Interact method
        * Binatang bisa bersuara
        */
        void interact();
};

#endif