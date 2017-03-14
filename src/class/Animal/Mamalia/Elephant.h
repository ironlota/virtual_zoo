#include "Mamalia.h"

/** @class Elephant
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Elephant : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        * @param x_ Posisi X.
        * @param y_ Posisi Y.
        * @param tamed_ Menyatakan kejinakan Animal tersebut; false = ganas, true = jinak.
        * @param weight_ Menyatakan berat Animal tersebut.
        * @param foodtype_ Menyatakan Animal tersebut Herbivore, Carnivore, atau Omnivore.
        * @param habitat Menyatakan habitat Animal tersebut.
        */
        Elephant(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Elephant lain yang akan dicopy.
        */ 
        Elephant(const Elephant&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Elephant();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Elephant lain yang akan dicopy.
        * @return Reference to Elephant.
        */
        Elephant& operator=(const Elephant&);

        /** @brief Interaksi 
        */
        void interact();
        /** @brief operator<<
        * @return ostream yang menghasilkan output di layar
        * @param ostream tampungan yang ingin di output
        * @param Animal yang ingin dicetak
        */
        friend ostream& operator<< (ostream& , const Elephant&);

        /** @brief Fungsi untuk mengembalikan simbol dari setiap hewan*/
        char GetSymbol();
};