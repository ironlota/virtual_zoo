#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include "../Facility.h"

using namespace std;

/** @class Restaurant
  * Restaurant merupakan ...
*/
class Cage : public Facility {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Restaurant(string = "");
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