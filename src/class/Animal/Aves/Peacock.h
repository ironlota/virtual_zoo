#include "Aves.h"

/** @class Peacock
  * Peacock merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Peacock : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Peacock(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Peacock(const Peacock& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Peacock();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Peacock& operator= (const Peacock& H);

    /** @brief Interaksi
    */
    void interact();
};