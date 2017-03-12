#include "Mamalia.h"

/** @class Bear
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Bear : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Bear(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
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

        /** @brief Interaksi 
        */
        void interact();

};