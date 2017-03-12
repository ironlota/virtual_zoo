#include "Amphibi.h"

class Salamander : public Amphibi {
    public:
        Salamander();
        
        Salamander(const Salamander&);
        
        ~Salamander();
        
        Salamander& operator=(const Salamander&);

};