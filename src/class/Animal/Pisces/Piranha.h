#include "Pisces.h"

/** @class Piranha
  * Piranha merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Piranha : public Pisces{
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
	Piranha(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Piranha lain yang akan dicopy.
        */ 
	Piranha(const Piranha& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Piranha();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Piranha lain yang akan dicopy.
        * @return Reference to Piranha.
        */
	Piranha& operator= (const Piranha& H);

    /** @brief Interaksi
    */
    void interact();
};