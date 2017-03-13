#include "Mamalia.h"

/** @class Deer
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Deer : public Mamalia{
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
        Deer(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Deer lain yang akan dicopy.
        */ 
        Deer(const Deer&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Deer();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Deer lain yang akan dicopy.
        * @return Reference to Deer.
        */
        Deer& operator=(const Deer&);

        /** @brief Interaksi 
        */
        void interact();
};