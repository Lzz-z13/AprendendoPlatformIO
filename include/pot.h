#pragma once
#include <Arduino.h>
#include <config.h>

class pot{

    public:
        pot(uint8_t pin, uint8_t filterSize = DEFAULT_FILTER); // Nor é tipado 
        // ~pot(); DESTRUTOR
        void begin(); // Juntar o pino 34 com o código
        uint16_t read();
        uint32_t readFiltered();
    

    private:
        uint8_t _pin;
        uint8_t _filterSize;
};