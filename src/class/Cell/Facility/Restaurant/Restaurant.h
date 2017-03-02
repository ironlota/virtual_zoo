#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
<<<<<<< HEAD
=======
#include "../Facility.h"
>>>>>>> v1

using namespace std;

/** @class Restaurant
  * Restaurant merupakan ...
*/
<<<<<<< HEAD
class Cage {
=======
class Cage : public Facility {
>>>>>>> v1
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Restaurant();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Restaurant(const Restaurant&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Restaurant();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Restaurant& operator=(const Restaurant&);
}

#endif