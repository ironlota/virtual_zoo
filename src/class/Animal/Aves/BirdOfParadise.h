#include "Aves.h"

/** @class BirdOfParadise
  * BirdOfParadise merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class BirdOfParadise : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	BirdOfParadise(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	BirdOfParadise(const BirdOfParadise& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~BirdOfParadise();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	BirdOfParadise& operator= (const BirdOfParadise& H);

    /** @brief Interaksi
    */
    void interact();
};