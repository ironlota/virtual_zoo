#include "Mamalia.h"

/** @class Girrafe
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Girrafe : public Mamalia{
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
        Girrafe(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Girrafe lain yang akan dicopy.
        */ 
        Girrafe(const Girrafe&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Girrafe();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Girrafe lain yang akan dicopy.
        * @return Reference to Girrafe.
        */
        Girrafe& operator=(const Girrafe&);

        /** @brief Interaksi 
        */
        void interact();
};