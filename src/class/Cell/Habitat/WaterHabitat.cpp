#include "WaterHabitat.h"

WaterHabitat::WaterHabitat() {
    name = "WaterHabitat";
}

WaterHabitat::WaterHabitat(const WaterHabitat& W) {
    name = W.name;
}

WaterHabitat::~WaterHabitat() {
    // do nothing
}

WaterHabitat& WaterHabitat::operator=(const WaterHabitat& W) {
    name = W.name;
    return *this;
}