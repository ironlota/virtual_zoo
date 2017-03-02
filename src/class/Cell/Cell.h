#ifndef CELL_H
#define CELL_H

#include <iostream>

using namespace std;

/** @class Cell
  * Cell merupakan ...
*/
class Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Cell();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Cell(const Cell&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Cell();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Cell& operator=(const Cell&);
<<<<<<< HEAD
}
=======
};
>>>>>>> v1

#endif