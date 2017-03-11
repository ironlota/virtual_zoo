#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include "../Facility.h"

using namespace std;

/** @class Road
  * Road merupakan ...
*/
class Cage : public Facility {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Road(string = "");
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