#include <pot.h>

pot::pot(uint8_t pin, uint8_t filterSize) 
:_pin(pin),
_filterSize(filterSize) {}

void pot::begin(){
    pinMode(_pin, INPUT);
}

uint16_t pot::read()
{
    return analogRead(_pin);
}

uint32_t pot::readFiltered() {
    uint32_t sum = 0;
    for (uint8_t i = 0; i < _filterSize; i++) {
        sum += read();
        delay(10);
    }
    return sum / _filterSize;
}