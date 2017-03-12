#include "Amphibi.h"

class Salamander : public Amphibi {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
        Salamander();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */
        Salamander(const Salamander&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */
        ~Salamander();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */
        Salamander& operator=(const Salamander&);

};