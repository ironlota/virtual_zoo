#ifndef AVES_H
#define AVES_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Aves
  * Aves merupakan class binatang yang habitatnya di udara
*/
class Aves : public Animal {
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
        Aves(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = false, float weight_ = 0, string foodtype_ = 0, string habitat = 0);
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Aves lain yang akan dicopy.
        */ 
        Aves(const Aves&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Aves();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Aves lain yang akan dicopy.
        * @return Reference to Aves.
        */ 
        Aves& operator=(const Aves&);
        /** @brief Interact
        * Prosedure interact yang virtual untuk direalisasikan di turunannya.
        */ 
        virtual void interact();
        /** @brief Fungsi untuk mengembalikan simbol dari setiap hewan*/
        virtual char GetSymbol();
};

#endif