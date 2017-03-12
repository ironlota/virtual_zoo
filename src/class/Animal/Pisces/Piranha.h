#include "Pisces.h"

/** @class Piranha
  * Piranha merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Piranha : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Piranha(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Piranha(const Piranha& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Piranha();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Piranha& operator= (const Piranha& H);

    /** @brief Interaksi
    */
    void interact();
};