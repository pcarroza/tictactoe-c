#ifndef TURN_H_
#define TURN_H_

typedef struct Turn Turn;

Turn* _Turn_();

void _DeleteTurn_(Turn* self);

void change_turn(Turn* self);

#endif







