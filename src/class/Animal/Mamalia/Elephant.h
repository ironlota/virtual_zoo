#include "Mamalia.h"
#include "../../Cell/Habitat/LandHabitat.h"

class Elephant : public Mamalia, public LandHabitat{
    public:
        Elephant();
        
        Elephant(const Elephant&);
        
        ~Elephant();
        
        operator=(const Elephant&);

};