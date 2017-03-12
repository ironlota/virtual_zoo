#include "Pisces.h"

/** @class Mantaray
  * Mantaray merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Mantaray : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Mantaray();

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Mantaray(const Mantaray& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Mantaray();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Mantaray& operator= (const Mantaray& H);
};