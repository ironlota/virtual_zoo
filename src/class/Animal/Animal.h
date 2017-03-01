#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

/** @class Animal
  * Animal merupakan ...
*/
class Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Animal();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Animal(const Animal&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Animal();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Animal& operator=(const Animal&);
}

#endif