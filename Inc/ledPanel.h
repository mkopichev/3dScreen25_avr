#ifndef LEDPANEL_H_
#define LEDPANEL_H_

#include "common.h"

#define LED_QUANTITY 64

typedef struct {

    uint8_t red;
    uint8_t green;
    uint8_t blue;
} rgbColor_t;

void ledPanelInit(void);
void ledPanelSetSingle(rgbColor_t color);
void ledPanelSetFull(rgbColor_t color);
void ledPanelClear(void);
void ledPanelDrawPicture(uint8_t *picture, rgbColor_t color);
void ledPanelDrawPictureGlowing(uint8_t *picture);

#endif