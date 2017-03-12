#include "Amphibi.h"

class Salamander : public Amphibi {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */ 
        Salamander(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");
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
        /** @brief Interaksi
        */
        void interact();
};