#ifndef WATERHABITAT_H
#define WATERHABITAT_H

#include <iostream>
#include "Habitat.h"
using namespace std;

/** @class WaterHabitat
  * WaterHabitat merupakan habitat untuk hewan yang tinggal di air
*/
class WaterHabitat : public Habitat {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        WaterHabitat();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        WaterHabitat(const WaterHabitat&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~WaterHabitat();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        WaterHabitat& operator=(const WaterHabitat&);
        /** @brief getIdCage
        * Mengembalikan int idCage
        */
        int getIdCage() {
            return idCage;
        }
    private:
        int idCage;
};

#endif