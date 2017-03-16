#include <iostream>
using namespace std;

/** @class Seahorse
  * Seahorse merupakan hewan yang berkelas Pisces dan habitatnya di air.
*/
class Seahorse {
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
	Seahorse(int x_ = 0, int y_ = 0, bool tamed_ = false, float weight_ = 0, string foodtype_ = "", string habitat = "");

	/** @brief Copy Constructor.
        * Melakukan inisialisasi kelas dengan memasukkan kelas lain sebagai parameternya
        * @param H Seahorse lain yang akan dicopy.
        */ 
	Seahorse(const Seahorse& H);

	/** @brief Destructor.
        * Dipanggil saat penghancuran objek
        */ 
	~Seahorse();

	/** @brief Operator =
        * Melakukan inisialisasi kelas dengan operator =
        * @param H Seahorse lain yang akan dicopy.
        * @return Reference to Seahorse.
        */
	Seahorse& operator= (const Seahorse& H);

        /** @brief interaksi
        */
        void interact();

        /** @brief operator<<
        * @return ostream yang menghasilkan output di layar
        * @param ostream tampungan yang ingin di output
        * @param Animal yang ingin dicetak
        */
        friend ostream& operator<< (ostream& , const Seahorse&);

        /** @brief Fungsi untuk mengembalikan simbol dari setiap hewan*/
        char GetSymbol();
};