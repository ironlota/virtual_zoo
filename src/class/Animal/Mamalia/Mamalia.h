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
        * @param x_ Posisi X.
        * @param y_ Posisi Y.
        * @param tamed_ Menyatakan kejinakan Animal tersebut; false = ganas, true = jinak.
        * @param weight_ Menyatakan berat Animal tersebut.
        * @param foodtype_ Menyatakan Animal tersebut Herbivore, Carnivore, atau Omnivore.
        * @param habitat Menyatakan habitat Animal tersebut.
        */    
        Mamalia(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Mamalia lain yang akan dicopy.
        */ 
        Mamalia(const Mamalia&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Mamalia();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Mamalia lain yang akan dicopy.
        * @return Reference to Mamalia.
        */ 
        Mamalia& operator=(const Mamalia&);
        /** @brief Interaksi
        */
        virtual void interact();
};

#endif