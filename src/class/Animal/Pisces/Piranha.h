#include "Pisces.h"

/** @class Piranha
  * Piranha merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Piranha : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Piranha();

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
};