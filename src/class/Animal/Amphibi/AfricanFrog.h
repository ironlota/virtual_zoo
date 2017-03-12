#include "Amphibi.h"

class AfricanFrog : public Amphibi {
    public:
        AfricanFrog();
        
        AfricanFrog(const AfricanFrog&);
        
        ~AfricanFrog();
        
        operator=(const AfricanFrog&);

};