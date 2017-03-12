#include "Mamalia.h"

/** @class Lion
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Lion : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Lion(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
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

        /** @brief Interaksi 
        */
        void interact();

};