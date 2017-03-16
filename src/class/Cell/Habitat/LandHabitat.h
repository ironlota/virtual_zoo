#ifndef LANDHABITAT_H
#define LANDHABITAT_H

#include <iostream>
using namespace std;

/** @class LandHabitat
  * LandHabitat merupakan habitat untuk hewan yang tinggal di darat
*/
class LandHabitat{
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        LandHabitat(int = 0, int = 0, string = "", int = -1);
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        LandHabitat(const LandHabitat&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~LandHabitat();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        LandHabitat& operator=(const LandHabitat&);
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