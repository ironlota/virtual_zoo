#include "Pisces.h"

/** @class Seahorse
  * Seahorse merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Seahorse : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Seahorse();

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
};