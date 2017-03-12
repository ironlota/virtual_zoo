#include "Mamalia.h"

/** @class Girrafe
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Girrafe : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Girrafe();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Girrafe(const Girrafe&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Girrafe();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Girrafe& operator=(const Girrafe&);

};