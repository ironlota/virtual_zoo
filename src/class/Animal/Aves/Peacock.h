#include "Aves.h"

/** @class Peacock
  * Peacock merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Peacock : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Peacock();

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Peacock(const Peacock& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Peacock();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Peacock& operator= (const Peacock& H);
};