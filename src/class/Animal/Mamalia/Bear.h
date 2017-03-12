#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Bear : public Mamalia, public LandHabitat{
    public:
        Bear();
        
        Bear(const Bear&);
        
        ~Bear();
        
        operator=(const Bear&);

};