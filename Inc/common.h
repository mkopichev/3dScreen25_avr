#ifndef COMMON_H_
#define COMMON_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdbool.h>
#include <avr/cpufunc.h>
#include "ledPanel.h"
#include "serviceLed.h"

#define OUT                             true
#define IN                              false
#define HIGH                            true
#define LOW                             false
#define ON                              true
#define OFF                             false
#define SET_PIN_MODE(ddr, pin, mode)    mode ? (ddr |= (1 << pin)) : (ddr &= ~(1 << pin))
#define SET_PIN_LEVEL(port, pin, level) level ? (port |= (1 << pin)) : (port &= ~(1 << pin))

#endif