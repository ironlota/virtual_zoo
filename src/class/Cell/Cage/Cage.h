#ifndef CAGE_H
#define CAGE_H

#include <iostream>
#include "../Cell.h"
#include "../../Animal/Animal.h"
using namespace std;

/** @class Cage
  * Cage merupakan ...
*/
class Cage : public Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Cage();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Cage(const Cage&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Cage();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Cage& operator=(const Cage&);
        /** @brief getAnimal
        * Mengembalikan kelas animal dengan addressnya sehingga animal juga bisa diedit secara langsung
        */ 
        Animal* getAnimal();
        /** @brief getAnimalMove
        * Mengembalikan move dari animal untuk berpindah posisi secara otomatis
        */ 
        moveList getAnimalMove();
     private :
        Animal* animal_;
};

#endif