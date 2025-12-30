#include "Inc/common.h"

int main(void) {

    rgbColor_t red = {.red = 255, .green = 0, .blue = 0};
    rgbColor_t green = {.red = 0, .green = 255, .blue = 0};
    rgbColor_t blue = {.red = 0, .green = 0, .blue = 255};
    rgbColor_t noColor = {.red = 0, .green = 0, .blue = 0};

    ledPanelInit();
    serviceLedInit();
    animationRun();

    while(1) {
    }
}
