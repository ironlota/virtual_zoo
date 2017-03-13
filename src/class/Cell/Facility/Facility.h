#ifndef FACILITY_H
#define FACILITY_H

#include <iostream>
#include "../Cell.h"

using namespace std;

/** @class Facility
  * Facility merupakan cell yang merepresentasikan sebuah facility
*/
class Facility : public Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Facility();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Facility(const Facility&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Facility();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Facility& operator=(const Facility&);
        /** @brief Operator <<
        * Output facility menggunakan operator<<
        */
        friend ostream& operator<<(ostream& os, const Cell& C);
};

#endif