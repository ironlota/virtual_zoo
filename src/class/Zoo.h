#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include "Cell/Cell.h"
#include "Animal/Animal.h"
#include "Cell/Facility/Facility.h"
#include "Cell/Habitat/Habitat.h"
#include "Cell/Facility/Road/Road.h"
#include "ConfigStore/ConfigStore.h"
using namespace std;

/** @class Zoo
  * Zoo merupakan class yang merepresentasikan sebuah kebun binatang
*/
class Zoo {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Zoo(int = 50);
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
        /** @brief setCell Animal
        * Menginisialisasi animal dan turunannya pada suatu cell
        */
        void setCell(int,int, Cell&);
        /** @brief getAllCell
        * Mengembalikan pointer semua cell di dalam vektor of vektor cell_
        */
        vector< vector< Cell* > >& getAllCell();
        /** @brief getMaxCell
        * Mengembalikan max cell
        */
        int getMaxCell() const;
        /** @brief SetAnimal
        * Berfungsi untuk meletakan animal
        * Asumsi bahwa animal sudah terdefinisi
        * @param Animal memberikan value animal yang ingin dimasukan
        */
        void SetAnimal(Animal&);
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
        * Metode untuk update status posisi dari tiap animal 
        */
        void update();
        /** @brief Tour
        * Metode untuk melakukan tour dari posisi i dan j 
        * @param int en_x adalah entrence x
        * @param int en_y adalah entrence y
        */
        void Tour(int en_x, int en_y);
        /** @brief TotalFood
        * Metode untuk mengambil total makanan dari semua binatang 
        */
        void TotalFood();

        /** @brief AddAnimal
        * @param Animal yang berupa masukan 
        */
        void AddAnimal(Animal&);
        /** @brief get
        * Mengembalikan configuration class
        */
        static Zoo& Get(int n)
        {
            static Zoo zoo(n);
            return zoo;
        }
    private:
        vector< vector< Cell* > >  cell_;
        vector<Animal*> animal_;
        const int maxCell;
};

#endif