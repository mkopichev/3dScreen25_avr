#include "../Inc/ledPanel.h"

bool timer0InitDone = false;
volatile uint8_t hue = 0;
rgbColor_t noColor = {.red = 0, .green = 0, .blue = 0};

void ledPanelInit(void) {

    SET_PIN_MODE(DDRD, 6, OUT); // PD6 is IN of RGB panel
    ledPanelClear();
}

void zeros(void) {

    SET_PIN_LEVEL(PORTD, 6, HIGH);
    _NOP();
    _NOP();
    SET_PIN_LEVEL(PORTD, 6, LOW);
    _NOP();
    _NOP();
    _NOP();
    _NOP();
}

void ones(void) {

    SET_PIN_LEVEL(PORTD, 6, HIGH);
    _NOP();
    _NOP();
    _NOP();
    _NOP();
    SET_PIN_LEVEL(PORTD, 6, LOW);
    _NOP();
    _NOP();
}

void ledPanelSetSingle(rgbColor_t color) {

    for(uint8_t i = 0b10000000; i >= 0b00000001; i = i >> 1) {

        ((color.green & i) > 0) ? ones() : zeros();
    }

    for(uint8_t i = 0b10000000; i >= 0b00000001; i = i >> 1) {

        ((color.red & i) > 0) ? ones() : zeros();
    }

    for(uint8_t i = 0b10000000; i >= 0b00000001; i = i >> 1) {

        ((color.blue & i) > 0) ? ones() : zeros();
    }
}

void ledPanelSetFull(rgbColor_t color) {

    for(uint8_t pos = 0; pos < LED_QUANTITY; pos++) {

        ledPanelSetSingle(color);
    }
}

void ledPanelClear(void) {

    for(uint8_t i = 0; i < LED_QUANTITY; i++) {

        ledPanelSetSingle(noColor);
    }
    _delay_ms(5);
}

void ledPanelDrawPicture(uint8_t *picture, rgbColor_t color) {

    for(int8_t pos = LED_QUANTITY - 1; pos >= 0; pos--) {

        if(picture[pos]) {

            ledPanelSetSingle(color);
        } else {

            ledPanelSetSingle(noColor);
        }
    }
}

void hueToRgb(uint8_t hue) {

    rgbColor_t interColor1 = {.red = 0, .green = hue, .blue = (85 - hue)},
               interColor2 = {.red = (hue - 85), .green = (170 - hue), .blue = 0},
               interColor3 = {.red = (255 - hue), .green = 0, .blue = (hue - 170)};
    if(hue <= 85) {

        ledPanelSetSingle(interColor1);
        return;
    } else if(hue <= 170) {

        ledPanelSetSingle(interColor2);
        return;
    } else {

        ledPanelSetSingle(interColor3);
        return;
    }
}

void timer0Init(void) {

    TCCR0 |= (1 << CS00) | (1 << CS02);
    TIMSK |= (1 << TOIE0);
    sei();
    timer0InitDone = true;
}

uint8_t tmpPicture[LED_QUANTITY] = {0};

void ledPanelDrawPictureGlowing(uint8_t *picture) {

    for(int8_t pos = LED_QUANTITY - 1; pos >= 0; pos--) {

        tmpPicture[pos] = picture[pos];
    }

    if(!timer0InitDone) {

        timer0Init();
    }
}

ISR(TIMER0_OVF_vect) { // 23 ms period

    hue += 1;
    for(int8_t pos = LED_QUANTITY - 1; pos >= 0; pos--) {

        if(tmpPicture[pos]) {

            hueToRgb(hue + pos);
        } else {

            ledPanelSetSingle(noColor);
        }
    }
}
