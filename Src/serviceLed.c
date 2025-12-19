#include "../Inc/serviceLed.h"

void serviceLedInit(void) {

    SET_PIN_MODE(DDRB, 5, OUT);
}

void serviceLedState(bool state) {

    if(state) {

        SET_PIN_LEVEL(PORTB, 5, HIGH);
    } else {

        SET_PIN_LEVEL(PORTB, 5, LOW);
    }
}

void serviceLedToggle(void) {

    PORTB ^= (1 << 5);
}
