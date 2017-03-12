#include "Aves.h"

/** @class Owl
  * Owl merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Owl : public Aves{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Owl(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

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

    /** @brief Inteaksi
    */
    void interact();
};