#ifndef ROAD_H
#define ROAD_H

#include <iostream>
<<<<<<< HEAD
=======
#include "../Facility.h"
>>>>>>> v1

using namespace std;

/** @class Road
  * Road merupakan ...
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
        Road();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Road(const Road&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Road();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Road& operator=(const Road&);
}

#endif