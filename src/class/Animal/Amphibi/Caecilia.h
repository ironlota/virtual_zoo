#include "Amphibi.h"

/** @class Caecilia
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Caecilia : public Amphibi {
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Caecilia();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Caecilia(const Caecilia&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Caecilia();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Caecilia& operator=(const Caecilia&);

};