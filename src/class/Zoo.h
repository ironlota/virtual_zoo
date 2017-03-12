#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include "Cell/Cell.h"
#include "Animal/Animal.h"

using namespace std;

/** @class Zoo
  * Zoo merupakan ...
*/
class Zoo {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Zoo(int = 50, string = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Zoo(const Zoo&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Zoo();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Zoo& operator=(const Zoo&);
        /** @brief Operator <<
        * Output matrix cell dan isinya dengan menggunakan operator =
        */
        friend ostream& operator<<(ostream&, const Zoo&);
        /** @brief getCell
        * Mengembalikan pointer cell di dalam vektor cell_
        */
        Cell* getCell(int, int);
        /** @brief getAllCell
        * Mengembalikan pointer semua cell di dalam vektor of vektor cell_
        */
        vector< vector<Cell*>>& getAllCell();
        /** @brief getMaxCell
        * Mengembalikan max cell
        */
        int getMaxCell() const;
    private:
        vector< vector<Cell*> > cell_;
        const int maxCell;
};

#endif