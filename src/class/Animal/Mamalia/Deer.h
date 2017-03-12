#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Deer : public Mamalia, public LandHabitat{
    public:
        Deer();
        
        Deer(const Deer&);
        
        ~Deer();
        
        operator=(const Deer&);

};