#include "Mamalia.h"

/** @class Tiger
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Tiger : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Tiger();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Tiger(const Tiger&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Tiger();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Tiger& operator=(const Tiger&);

};