#include "Amphibi.h"
#include "../../Cell/Habitat/Amphibi.h"

/** @class Exolotl
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Exolotl : public Mamalia, public LandHabitat, public WaterHabitat {
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Exolotl();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Exolotl(const Exolotl&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Exolotl();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Exolotl& operator=(const Exolotl&);

};