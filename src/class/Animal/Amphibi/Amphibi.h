#ifndef AMPHIBI_H
#define AMPHIBI_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Amphibi
  * Amphibi merupakan class binatang yang hidup di dua habitat
*/
class Amphibi : public Animal {
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
        Amphibi(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Amphibi lain yang akan dicopy.
        */ 
        Amphibi(const Amphibi&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Amphibi();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Amphibi lain yang akan dicopy.
        * @return Reference to Amphibi.
        */ 
        Amphibi& operator=(const Amphibi&);
        /** @brief Interaksi 
        */
        virtual void interact();
        /** @brief Fungsi untuk mengembalikan simbol dari setiap hewan*/
        virtual char GetSymbol();
};

#endif