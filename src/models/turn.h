#ifndef TURN_H_
#define TURN_H_

#include "color.h"

typedef struct Turn Turn;

Turn* _Tunr_();

void _DeleteTurn_(Turn *self);

Color take_turn(Turn* self);

void change_turn(Turn* self);

#endif
