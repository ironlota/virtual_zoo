#include "Pisces.h"

/** @class Mantaray
  * Mantaray merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Mantaray : public Pisces{
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
	Mantaray(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Mantaray lain yang akan dicopy.
        */ 
	Mantaray(const Mantaray& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Mantaray();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Mantaray lain yang akan dicopy.
        * @return Reference to Mantaray.
        */
	Mantaray& operator= (const Mantaray& H);

    /** @brief Interaksi
    */
    void interact();
};