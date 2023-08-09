#ifndef GAME_H_
#define GAME_H_

#include <stdbool.h>

#include "coordinate.h"
#include "observer.h"
#include "color.h"

typedef struct Game Game;

Game* _Game_(Observer *observer);

void _FreeGame_(Game *self);

void put_game(Game *self, Coordinate *coordinate);

void move_game(Game *self, Coordinate *coordinate);

void remove_game(Game *self, Coordinate *coordinate);

Color take_game(Game *self);

void change_turn_game(Game *self);

bool is_complete_game(Game *self);

bool has_any_players_game(Game *self, Coordinate *coordinate);

bool is_occupied_by_current_player_game(Game *self, Coordinate *coordinate);

bool exist_tictactoe_game(Game *self);

void clear_game(Game *self);

Coordinate* get_empty_coordinate_game(Game *self);

Coordinate* get_player_coordinate_game(Game *self);

void initialize_game(Game *self);

void begin_game(Game *self);

void finalize_game(Game *self);

void end_game(Game *self);

#endif
