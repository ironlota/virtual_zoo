#include "Amphibi.h"
#include "../../Cell/Habitat/LandHabitat.h"
#include "../../Cell/Habitat/WaterHabitat.h"

class AfricanFrog : public Mamalia, public LandHabitat, public WaterHabitat {
    public:
        AfricanFrog();
        
        AfricanFrog(const AfricanFrog&);
        
        ~AfricanFrog();
        
        operator=(const AfricanFrog&);

};