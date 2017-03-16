#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include "Cell/Cell.h"
#include "Animal/Animal.h"
using namespace std;

/** @class Zoo
  * Zoo merupakan class yang merepresentasikan sebuah kebun binatang
*/
class Zoo {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Zoo(int = 40);
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
        Cell GetCell(int, int);
        /** @brief setCell Animal
        * Menginisialisasi animal dan turunannya pada suatu cell
        */
        void SetCell(int,int, Cell&);
        /** @brief getAllCell
        * Mengembalikan pointer semua cell di dalam vektor of vektor cell_
        */
        Cell** GetAllCell();
        /** @brief getMaxCell
        * Mengembalikan max cell
        */
        int GetMaxCell() const;
        /** @brief SetAnimal
        * Berfungsi untuk meletakan animal
        * Asumsi bahwa animal sudah terdefinisi
        * @param Animal memberikan value animal yang ingin dimasukan
        */
        void SetAnimal(int,int,Animal*);
        /** @brief GetAnimal
        * Berfungsi untuk mengambil animal
        * Asumsi bahwa vector animal sudah terdefinisi
        * @return Pointer to Animal
        * @param int x
        * @param int y
        */
        Animal* GetAnimal(int,int);


        /* METODE LAIN */
        /** @brief update
        * Metode untuk update status posisi dari tiap animal */
        void update();

        /** @brief get
        * Mengembalikan configuration class
        */
        static Zoo& Get(int n)
        {
            static Zoo zoo(n);
            return zoo;
        }
        
    private:
        Cell **cell;
        Animal *animal;
        const int maxCell;
};

#endif