#ifndef PISCES_H
#define PISCES_H

#include <iostream>

using namespace std;

/** @class Pisces
  * Pisces merupakan ...
*/
class Pisces {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Pisces();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Pisces(const Pisces&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Pisces();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Pisces& operator=(const Pisces&);
}

#endif