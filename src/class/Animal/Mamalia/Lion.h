#include "Mamalia.h"

/** @class Lion
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Lion : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Lion();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Lion(const Lion&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Lion();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Lion& operator=(const Lion&);

};