#ifndef AMPHIBI_H
#define AMPHIBI_H

#include <iostream>
#include "../Animal.h"

using namespace std;

/** @class Amphibi
  * Amphibi merupakan ...
*/
class Amphibi : public Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Amphibi(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Amphibi(const Amphibi&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Amphibi();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Amphibi& operator=(const Amphibi&);
        /** @brief Interaksi 
        */
        virtual void interact();
};

#endif