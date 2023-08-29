#include "pin_definition.h"

#define VALVE1 0

namespace _10klab{
    namespace pinManager{
        void printValves();

        void pinMap(){
            pinMode(VALVE1, OUTPUT);
            printValves();
        }
        void printValves(){
            Serial.println("Set valve1");
        }

    }
}