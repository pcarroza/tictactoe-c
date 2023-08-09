#ifndef BOARD_H_
#define BOARD_H_

#include <stdbool.h>

#include "observer.h"
#include "coordinate.h"
#include "color.h"
#include "subject.h"

typedef struct Board Board;

Board* _Board_();

void _FreeBoard_(Board *self);

void set(Board *self);

void put_board(Board *self, Coordinate *coordinate);

void move_board(Board *self, Coordinate *coordinate);

void remove_board(Board *self, Coordinate *coordinate);

Color take_board(Board *self);

void change_turn_board(Board *self);

bool is_complete_board(Board *self);

bool has_any_players_board(Board *self, Coordinate *coordinate);

bool is_occupied_by_current_player_board(Board *self, Coordinate *coordinate);

bool exist_tictactoe_board(Board *self);

void clear_board(Board *self);

Coordinate* get_empty_coordinate_board(Board *self);

Coordinate* get_player_coordinate_board(Board *self);

void subscriber_board(Board *self, Observer *observer);

void initialize_board(Board *self);

void begin_board(Board *self);

void finalize_board(Board *self);

void end_board(Board *self);

#endif
