#include "Amphibi.h"

class AfricanFrog : public Amphibi {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        AfricanFrog();
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

};