#include "Pisces.h"

/** @class Seahorse
  * Seahorse merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Seahorse : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Seahorse(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Seahorse(const Seahorse& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Seahorse();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Seahorse& operator= (const Seahorse& H);

    /** @brief interaksi
    */
    void interact();
};