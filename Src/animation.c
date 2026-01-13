#include "../Inc/animation.h"

extern uint8_t tmpPicture[8];

bool timer1InitDone = false;

void timer1Init(void) {

    TCCR1B = (1 << CS10); // prescaler 1
    TCNT1 = 37888;
    TIMSK |= (1 << TOIE1);
    sei();
    timer1InitDone = true;
}

void animationRun(void) {

    TCNT1 = 37888;
    TIMSK |= (1 << TOIE1);

    if(!timer1InitDone) {

        timer1Init();
    }
}

void animationStop(void) {

    TIMSK &= ~(1 << TOIE1);
}

ISR(TIMER1_OVF_vect) { // 400 Hz

    TCNT1 = 37888;

    static uint8_t framesCounter = 0;

    memcpy(tmpPicture, getPicture(framesCounter), 8 * sizeof(uint8_t));

    if(framesCounter > 19) {

        framesCounter = 0;
    } else {

        framesCounter++;
    }
}