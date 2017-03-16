#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
using namespace std;

/** @class Restaurant
  * Restaurant merupakan facility yang merepresentasikan sebuah restoran dalam kebun binatang
*/
class Restaurant{
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Restaurant(int = 0, int = 0, string = "Restaurant", int = -1, string = "Restaurant");
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
};

#endif