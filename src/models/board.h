#ifndef BOARD_H_
#define BOARD_H_

#include <stdbool.h>

#include "coordinate.h"

typedef struct Board Board;

Board* _Board_();

void _DeleteBoard_(Board* self);

void subcribe(Board* self, void* observer);

void put_token_board(Board* self, Coordinate* coordinate);

void move_token_board(Board* self, Coordinate* coordinate);

bool is_empty_board(Board* self, Coordinate *coordinate);

void change_the_turn_board(Board* self);

bool exist_tictactoe_board(Board* self);

void clear_the_board(Board* self);

#endif
