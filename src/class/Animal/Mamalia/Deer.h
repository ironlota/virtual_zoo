#include "Mamalia.h"

/** @class Deer
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Deer : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Deer(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
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

        /** @brief Interaksi 
        */
        void interact();
};