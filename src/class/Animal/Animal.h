#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

enum moveList {        
    UP, 
    DOWN, 
    RIGHT, 
    LEFT,
    NUM_MOVE
}; 

/** @class Animal
  * Animal merupakan ...
*/
class Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Animal(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Animal(const Animal&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Animal();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Animal& operator=(const Animal&);
        /** @brief Eat
        * Prosedur eat yang pure virtual untuk direalisasikan di turunannya
        */ 
        virtual void eat() = 0;
        
        /** @brief Reproduction
        * Prosedur reproduction yang pure virtual untuk direalisasikan di turunannya
        */ 
        virtual void reproduction() = 0;
        
        /** @brief Interact
        * Prosedur Interact yang pure virtual untuk direalisasikan di turunannya
        */ 
        virtual void interact() = 0;

        /** @brief Move
        * Prosedur move yang dapat dipanggil di turunannya
        * Prosedur 
        */
        moveList move();

        /* ***** Getter and Setter ***** */
        /** @brief Fungsi untuk mengembalikan berat */
        float getWeight() { return weight; }
        /** @brief Fungsi untuk mengembalikan nama */
        string getName() { return name; }
        /** @brief Fungsi untuk mengembalikan lokasi x */
        int getLocX() { return x; }
        /** @brief Fungsi untuk mengembalikan lokasi y */
        int getLocY() { return y; }
        /** @brief Fungsi untuk mengembalikan boolean tamed ato tidak*/
        bool getTamed() { return tamed; }
        /** @brief Fungsi untuk mengembalikan boolean tamed ato tidak*/
        string getFoodtype() { return foodtype; }
        /** @brief Fungsi untuk mengembalikan boolean tamed ato tidak*/
        string getHabitat() { return livingHabitat; }

     protected:
        float weight;
        string name;
        int x;
        int y;
        bool tamed;
        string foodtype;
        string livingHabitat;
};
#endif