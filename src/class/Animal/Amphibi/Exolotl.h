#include "Amphibi.h"

/** @class Exolotl
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Exolotl : public Amphibi {
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Exolotl(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Exolotl(const Exolotl&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Exolotl();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Exolotl& operator=(const Exolotl&);
        /** @brief Interaksi
        */
        void interact();

};