#include "/Pisces.h"
#include "../../Cell/Habitat/WaterHabitat.h"

/** @class Shark
  * Shark merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Shark : public Pisces, public WaterHabitat {
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Shark();

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
};