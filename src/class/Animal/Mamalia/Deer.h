#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

/** @class Deer
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Deer : public Mamalia, public LandHabitat{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Deer();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Deer(const Deer&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Deer();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Deer& operator=(const Deer&);

};