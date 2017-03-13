#ifndef ROAD_H
#define ROAD_H

#include <iostream>
#include "../Facility.h"

using namespace std;

/** @class Road
  * Road merupakan facility yang merepresentasikan sebuah jalan di dalam kebun binatang
*/
class Road : public Facility {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Road(int = 0, int = 0, string = "Road", Animal* = nullptr, int = -1, string = "Road");
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
};

#endif