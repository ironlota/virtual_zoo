#ifndef CELL_H
#define CELL_H

#include <iostream>
#include "../Animal/Animal.h"
#include "Facility/Road.h"
#include "Facility/Park.h"
#include "Facility/Restaurant.h"

using namespace std;

/** @class Cell
  * Cell merupakan elemen per objek peta
*/
class Cell {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Cell(int = 0, int = 0, string ="", Animal* = nullptr, int id = -1, char = '\0', string="");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Cell(const Cell&);
        /** @brief Virtual Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Cell();
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
        /** @brief GetCageId
        * @return int id of cage 
        */
        int GetCageId();
        /** @brief GetSymbol
        * @return char pengembali symbol 
        */
        char GetSymbol();

        /** @brief setLocX
        * Menginisialisasi lokasi Y bertipe integer
        */
        void setLocX(int);
        /** @brief setLocY
        * Menginisialisasi lokasi Y bertipe integer
        */
        void setLocY(int);
        /** @brief setType
        * Menginisialisasi Type bertipe string
        */
        void setType(string);
        /** @brief setAnimalPtr
        * Menginisialisasi ptr animal saat alokasi
        */
        void setAnimalPtr(Animal*);
        /** @brief SetCageId
        * Menginisiasi cage id
        */
        void SetCageId(int);
        /** @brief SetSymbol
        * @param karakter animal
        */
        void SetSymbol(char);

        /** @brief Operator <<
        * Output cell dengan menggunakan operator<<
        */
        friend ostream& operator<<(ostream& os, const Cell& C);
        

    private:
        int LocX;
        int LocY;
        string type; //Road, Restaurant, Park, Land, Water, Flying
        string name;
        Animal* animalPtr; //Pointer to Animal if cell is a habitat
        int cage_id; // -1 for undefined
        char symbol = '\0';
};
#endif