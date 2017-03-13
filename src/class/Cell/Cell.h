#ifndef CELL_H
#define CELL_H

#include <iostream>
#include "../Animal/Animal.h"
using namespace std;

/** @class Cell
  * Cell merupakan ...
*/
class Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Cell(int = 0, int = 0, string ="", Animal* = nullptr);
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
        /** @brief getLocX
        * Mengembalikan lokasi X bertipe integer
        */ 
        int getLocX();
        /** @brief getLocY
        * Mengembalikan lokasi Y bertipe integer
        */
        int getLocY();
        /** @brief getCellType
        * @return string yang merupakan tipe cell : road, restaurant 
        * park, land, water, flying 
        */
        string getCellType();
        /** @brief getAnimalPtr
        * @return Pointer to animal 
        */
        Animal* getAnimalPtr();


        /** @brief setLocX
        * Menginisialisasi lokasi Y bertipe integer
        */
        void setLocX(int);
        /** @brief setLocY
        * Menginisialisasi lokasi Y bertipe integer
        */
        void setLocY(int);
        /** @brief setName
        * Menginisialisasi name bertipe string
        */
        void setType(string);
        /** @brief setAnimalPtr
        * Menginisialisasi ptr animal saat alokasi
        */
        void setAnimalPtr(Animal*);
        /** @brief Operator <<
        * Output cell dengan menggunakan operator<<
        */
        friend ostream& operator<<(ostream& os, const Cell& C);

    protected:
        int LocX;
        int LocY;
        string type; //Road, Restaurant, Park, Land, Water, Flying
        Animal* animalPtr; //Pointer to Animal if cell is a habitat
};
#endif