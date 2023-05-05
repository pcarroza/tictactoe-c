#ifndef GAME_H_
#define GAME_H_

#include <stdbool.h>

#include "coordinate.h"
#include "state-game.h"
#include "observer.h"

typedef struct Game Game;

Game* _Game_(Observer* observer);

void _DeleteGame_(Game* self);

bool is_empty_game(Game* self, Coordinate* coordinate);

bool full_game(Game* self, Coordinate* coordinate);

void put_token_game(Game* self, Coordinate* coordinate);

void move_token_game(Game* self, Coordinate* coordinate);

StateGame get_state_the_game(Game* self);

void change_the_turn(Game* self);

int get_number_of_players_the_game(Game* self);

void clear_the_game(Game* self);

bool exist_tictactoe(Game* game);

void initialize_game(Game* self);

void finalize_game(Game* self);

void begin_game(Game* self);

void end_game(Game* self);

#endif
