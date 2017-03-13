#include "Aves.h"

/** @class Hawk
  * Hawk merupakan hewan yang berkelas Aves dan habitatnya di udara.
*/
class Hawk : public Aves {
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
	Hawk(int x_ = 0, int y_ = 0, bool tamed_ = 0, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Hawk lain yang akan dicopy.
        */ 
	Hawk(const Hawk& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Hawk();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Hawk lain yang akan dicopy.
        * @return Reference to Hawk.
        */
	Hawk& operator= (const Hawk& H);

    /** @brief Interaksi
    */
    void interact();
    /** @brief operator<<
        * @return ostream yang menghasilkan output di layar
        * @param ostream tampungan yang ingin di output
        * @param Animal yang ingin dicetak
        */
    friend ostream& operator<< (ostream& , const Hawk&);
};