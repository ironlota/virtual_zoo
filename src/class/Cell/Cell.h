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
        Cell(int = 0, int = 0);
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Cell(const Cell&);
        /** @brief Virtual Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        virtual ~Cell();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Cell& operator=(const Cell&);
        /** @brief GetLocX
        * Mengembalikan lokasi X bertipe integer
        */ 
        int getLocX();
        /** @brief GetLocY
        * Mengembalikan lokasi Y bertipe integer
        */
        int getLocY();
        /** @brief Operator <<
        * Output cell dengan menggunakan operator<<
        */
        friend ostream& operator<<(ostream& os, const Cell& C);

    private:
        int LocX;
        int LocY;
};
#endif