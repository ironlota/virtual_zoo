#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Lion : public Mamalia, public LandHabitat{
    public:
        Lion();
        
        Lion(const Lion&);
        
        ~Lion();
        
        operator=(const Lion&);

};