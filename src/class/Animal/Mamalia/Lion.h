#include "Mamalia.h"

/** @class Lion
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Lion : public Mamalia{
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
        Lion(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Lion lain yang akan dicopy.
        */ 
        Lion(const Lion&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Lion();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Lion lain yang akan dicopy.
        * @return Reference to Lion.
        */
        Lion& operator=(const Lion&);

        /** @brief Interaksi 
        */
        void interact();

};