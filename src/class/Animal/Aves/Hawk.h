#include "Aves.h"

/** @class Hawk
  * Hawk merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Hawk : public Aves {
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Hawk(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Hawk(const Hawk& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Hawk();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Hawk& operator= (const Hawk& H);

    /** @brief Interaksi
    */
    void interact();
};