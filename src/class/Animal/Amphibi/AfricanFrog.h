#include "Amphibi.h"

class AfricanFrog : public Amphibi {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        AfricanFrog(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        AfricanFrog(const AfricanFrog&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */
        ~AfricanFrog();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        AfricanFrog& operator=(const AfricanFrog&);
        /** @brief Interaksi 
        */
        void interact();

};