#include "Amphibi.h"
#include "../../Cell/Habitat/LandHabitat.h"
#include "../../Cell/Habitat/WaterHabitat.h"

class Salamander : public Mamalia, public LandHabitat, public WaterHabitat {
    public:
        Salamander();
        
        Salamander(const Salamander&);
        
        ~Salamander();
        
        operator=(const Salamander&);

};