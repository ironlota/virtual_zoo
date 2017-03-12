#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Giraffe : public Mamalia, public LandHabitat{
    public:
        Giraffe();
        
        Giraffe(const Giraffe&);
        
        ~Giraffe();
        
        operator=(const Giraffe&);

};