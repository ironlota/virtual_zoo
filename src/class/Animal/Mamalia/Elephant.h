#include "Mamalia.h"

/** @class Elephant
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Elephant : public Mamalia{
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Elephant(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
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

        /** @brief Interaksi 
        */
        void interact();

};