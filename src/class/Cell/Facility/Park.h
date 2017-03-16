#ifndef PARK_H
#define PARK_H

#include <iostream>

using namespace std;

/** @class Park
  * Park merupakan facility yang merepresentasikan taman dalam kebun binatang
*/
class Park {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Park(int = 0, int = 0, string = "Park", int = -1, string = "Park");
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
};

#endif