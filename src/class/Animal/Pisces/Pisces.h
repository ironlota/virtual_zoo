#ifndef PISCES_H
#define PISCES_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Pisces
  * Pisces merupakan class binatang yang habitatnya di air
*/
class Pisces : public Animal {
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
        Pisces(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Pisces(const Pisces&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        * @param H Pisces lain yang akan dicopy.
        */ 
        ~Pisces();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Pisces lain yang akan dicopy.
        * @return Reference to Pisces.
        */ 
        Pisces& operator=(const Pisces&);
        /** @brief Interaksi
        */
        virtual void interact();
};

#endif