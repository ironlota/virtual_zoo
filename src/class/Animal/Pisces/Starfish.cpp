#include "/Pisces.h"
#include "../../Cell/Habitat/WaterHabitat.h"

class Starfish : public Pisces, public WaterHabitat {
	Starfish();
	Starfish(const Starfish& H);
	~Starfish();
	Starfish& operator= (const Starfish& H);
};