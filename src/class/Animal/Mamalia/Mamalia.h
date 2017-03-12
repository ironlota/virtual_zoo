#ifndef MAMALIA_H
#define MAMALIA_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Mamalia
  * Mamalia merupakan class yang binatang yang menyusui
*/
class Mamalia : public Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Mamalia(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
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
        /** @brief Interaksi
        */
        virtual void interact();
};

#endif