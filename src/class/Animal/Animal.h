#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>

using namespace std;

const int UP = 0; 
const int DOWN = 1; 
const int RIGHT = 2; 
const int LEFT = 3;

/** @class Animal
  * Animal merupakan ...
*/
class Animal {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Animal(int x_ = 0, int y_ = 0, string name_ = "", bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
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
        float eat() { return 0.1*weight; }
        /** @brief Interact
        * Prosedur Interact yang pure virtual untuk direalisasikan di turunannya
        */ 
        virtual void interact() = 0;

        /** @brief Move
        * @return int yang melambangkan gerakan hewan
        * @param bool true bila boleh ke atas
        * @param bool true bila boleh ke bawah
        * @param bool true bila boleh ke kanan
        * @param bool true bila bole ke kiri
        */
        int move(bool, bool, bool, bool);

        /** @brief operator<<
        * @return ostream yang menghasilkan output di layar
        * @param ostream tampungan yang ingin di output
        * @param Animal yang ingin dicetak
        */
        //friend ostream& operator<< (ostream& , const Animal&);

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
        /** @brief Fungsi untuk mengembalikan simbol dari setiap hewan*/
        virtual char GetSymbol();

     protected:
        float weight;
        string name;
        int x;
        int y;
        bool tamed;
        string foodtype;
        string livingHabitat; //Land, Water, Flying
};
#endif