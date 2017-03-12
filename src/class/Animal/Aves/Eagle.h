#include "/Aves.h"

/** @class Eagle
  * Eagle merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Eagle : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Eagle();

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
};