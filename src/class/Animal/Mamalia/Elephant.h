#include "Mamalia.h"

/** @class Elephant
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Elephant : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Elephant();
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Elephant(const Elephant&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Elephant();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Elephant& operator=(const Elephant&);

};