#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Tiger : public Mamalia, public LandHabitat{
    public:
        Tiger();
        
        Tiger(const Harimau&);
        
        Tiger();
        
        operator=(const Tiger&);

};