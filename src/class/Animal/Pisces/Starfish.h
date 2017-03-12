#include "Pisces.h"

/** @class Starfish
  * Starfish merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Starfish : public Pisces{
	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
	Starfish(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
	Starfish(const Starfish&);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Starfish();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
	Starfish& operator= (const Starfish&);

    /** @brief interaksi
    */
    void interact();
};