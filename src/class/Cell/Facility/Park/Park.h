#ifndef PARK_H
#define PARK_H

#include <iostream>
<<<<<<< HEAD
=======
#include "../Facility.h"
>>>>>>> v1

using namespace std;

/** @class Park
  * Park merupakan ...
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
        Park();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Park(const Park&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Park();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Park& operator=(const Park&);
}

#endif