#include "Pisces.h"

/** @class Shark
  * Shark merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Shark : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Shark(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Shark(const Shark& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Shark();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Shark& operator= (const Shark& H);
    /** @brief Interaksi
    */
    void interact();
};