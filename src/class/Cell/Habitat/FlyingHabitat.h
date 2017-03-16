#ifndef FLYINGHABITAT_H
#define FLYINGHABITAT_H

#include <iostream>
using namespace std;

/** @class FlyingHabitat
  * FlyingHabitat merupakan habitat untuk hewan yang tinggal di udara
*/
class FlyingHabitat{
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        FlyingHabitat(int = 0, int = 0, string = "", int = -1);
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        FlyingHabitat(const FlyingHabitat&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~FlyingHabitat();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        FlyingHabitat& operator=(const FlyingHabitat&);
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