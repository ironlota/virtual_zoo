#include "Amphibi.h"

/** @class Caecilia
  * Hawk merupakan hewan yang berkelas Mamalia dan habitatnya di darat.
*/
class Caecilia : public Amphibi {
    public:
    	/** @brief Constructor.
        * Melakukan inisialisasi kelas
        * @param x_ Posisi X.
        * @param y_ Posisi Y.
        * @param tamed_ Menyatakan kejinakan Animal tersebut; false = ganas, true = jinak.
        * @param weight_ Menyatakan berat Animal tersebut.
        * @param foodtype_ Menyatakan Animal tersebut Herbivore, Carnivore, atau Omnivore.
        * @param habitat Menyatakan habitat Animal tersebut.
        */
        Caecilia(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0.5, string foodtype_ = "", string habitat = "");
        
        /** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Caecilia lain yang akan dicopy.
        */ 
        Caecilia(const Caecilia&);
        
        /** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
        ~Caecilia();
        
        /** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Caecilia lain yang akan dicopy.
        * @return Reference to Caecilia.
        */
        Caecilia& operator=(const Caecilia&);
        /** @brief interaksi
        */
        void interact();
        
        /** @brief operator<<
        * @return ostream yang menghasilkan output di layar
        * @param ostream tampungan yang ingin di output
        * @param Animal yang ingin dicetak
        */
        friend ostream& operator<< (ostream& , const Animal&);

};