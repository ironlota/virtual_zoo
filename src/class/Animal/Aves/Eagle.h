#include "Aves.h"

/** @class Eagle
  * Eagle merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Eagle : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Eagle(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Eagle(const Eagle& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Eagle();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Eagle& operator= (const Eagle& H);

    /** @ Interaksi
    */
    void interact();
};