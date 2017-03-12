#include "/Aves.h"
#include "../../Cell/Habitat/FlyingHabitat.h"

/** @class Owl
  * Owl merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Owl : public Aves, public FlyingHabitat {
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Owl();

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Owl(const Owl& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Owl();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Owl& operator= (const Owl& H);
};