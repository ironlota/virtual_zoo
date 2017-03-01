#include <iostream>

using namespace std;

/** @class Zoo
  * Zoo merupakan ...
*/
class Zoo {
    public:
        /** @brief Constructor.
        * Melakukan inisialisasi kelas
        */    
        Zoo();
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        */ 
        Zoo(const Zoo&);
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Zoo();
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        */ 
        Zoo& operator=(const Zoo&);
}