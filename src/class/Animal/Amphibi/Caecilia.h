#include "Amphibi.h"

/** @class Caecilia
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Caecilia : public Amphibi {
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        */
        Caecilia(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
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
        /** @brief interaksi
        */
        void interact();
};