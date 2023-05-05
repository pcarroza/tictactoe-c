#ifndef TICTACTOE_H_
#define TICTACTOE_H_

#include <stdio.h>
#include <stdlib.h>

#include "models/game.h"
#include "models/coordinate.h"

typedef struct TicTacToe TicTacToe;

TicTacToe* _TicTacToe_();

void _DeleteTicTacToe_(TicTacToe* self);

void run(TicTacToe* self);

#endif
