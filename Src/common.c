#include "../Inc/common.h"

uint8_t picture0[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000};

uint8_t picture1[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000};

uint8_t picture2[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000};

uint8_t picture3[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture4[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000100,
    0b00000100,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture5[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture6[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00100000,
    0b00100000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture7[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010100,
    0b00000000,
    0b00000000,
    0b00010100,
    0b00000000,
    0b00000000};

uint8_t picture8[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000};

uint8_t picture9[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000};

uint8_t picture10[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000};

uint8_t picture11[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000};

uint8_t picture12[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000,
    0b00010010,
    0b00000000,
    0b00000000};

uint8_t picture13[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00010100,
    0b00000000,
    0b00000000,
    0b00010100,
    0b00000000,
    0b00000000};

uint8_t picture14[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00100000,
    0b00100000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture15[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture16[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000100,
    0b00000100,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture17[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00100100,
    0b00000000,
    0b00000000};

uint8_t picture18[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000};

uint8_t picture19[LED_QUANTITY / 8] = {
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000,
    0b01001000,
    0b00000000,
    0b00000000};

uint8_t *getPicture(uint8_t index) {

    switch(index) {
    case 0:
        return picture0;
    case 1:
        return picture1;
    case 2:
        return picture2;
    case 3:
        return picture3;
    case 4:
        return picture4;
    case 5:
        return picture5;
    case 6:
        return picture6;
    case 7:
        return picture7;
    case 8:
        return picture8;
    case 9:
        return picture9;
    case 10:
        return picture10;
    case 11:
        return picture11;
    case 12:
        return picture12;
    case 13:
        return picture13;
    case 14:
        return picture14;
    case 15:
        return picture15;
    case 16:
        return picture16;
    case 17:
        return picture17;
    case 18:
        return picture18;
    case 19:
        return picture19;
    default:
        return picture0;
    }
}