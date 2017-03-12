#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

/** @class Bear
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Bear : public Mamalia, public LandHabitat{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Bear();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Bear(const Bear&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Bear();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Bear& operator=(const Bear&);

};