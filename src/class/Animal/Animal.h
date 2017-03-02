#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

/** @class Animal
  * Animal merupakan ...
*/
class Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Animal();
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

     protected:
        /** @brief Move
        * Prosedur move yang dapat dipanggil di turunannya
        * Prosedur 
        */ 
        void move();
        float weight;
};
#endif