#include "WaterHabitat.h"

WaterHabitat::WaterHabitat() {
    type = "WaterHabitat";
}

WaterHabitat::WaterHabitat(const WaterHabitat& W) {
    type = W.type;
}

WaterHabitat::~WaterHabitat() {
    // do nothing
}

WaterHabitat& WaterHabitat::operator=(const WaterHabitat& W) {
    type = W.type;
    return *this;
}