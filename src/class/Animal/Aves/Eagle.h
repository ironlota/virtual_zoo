#include "Aves.h"

/** @class Eagle
  * Eagle merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Eagle : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        * @param x_ Posisi X.
        * @param y_ Posisi Y.
        * @param tamed_ Menyatakan kejinakan Animal tersebut; false = ganas, true = jinak.
        * @param weight_ Menyatakan berat Animal tersebut.
        * @param foodtype_ Menyatakan Animal tersebut Herbivore, Carnivore, atau Omnivore.
        * @param habitat Menyatakan habitat Animal tersebut.
        */ 
	Eagle(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Eagle lain yang akan dicopy.
        */ 
	Eagle(const Eagle& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Eagle();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Eagle lain yang akan dicopy.
        */
	Eagle& operator= (const Eagle& H);

    /** @ Interaksi
    */
    void interact();
};