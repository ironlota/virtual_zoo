#include "/Aves.h"
#include "../../Cell/Habitat/FlyingHabitat.h"

/** @class Hawk
  * Hawk merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Hawk : public Aves, public FlyingHabitat {
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Hawk();

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
};