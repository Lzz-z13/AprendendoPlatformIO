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