#ifndef PARK_H
#define PARK_H

#include <iostream>
#include "../Facility.h"

using namespace std;

/** @class Park
  * Park merupakan ...
*/
class Park : public Facility {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Park(string = "");
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