#ifndef LOCALCONTROLLER_H_
#define LOCALCONTROLLER_H_

#include <stdbool.h>

#include "../../models/coordinate.h"
#include "../../models/game.h"

typedef struct LocalController LocalController;

LocalController* _LocalController_(Game *game);

void _FreeLocalController_(LocalController *self);

Game* get_game(LocalController *self);

void put(LocalController *self, Coordinate *coordinate);

void move(LocalController *self, Coordinate *coordinate);

void remove_(LocalController *self, Coordinate *coordinate);

Color take(LocalController *self);

void change(LocalController *self);

bool is_complete(LocalController *self);

bool has_any_players(LocalController *self, Coordinate *coordinate);

bool is_occupied_by_current_player(LocalController *self,
		Coordinate *coordinate);

bool exist_tictactoe(LocalController *self);

void clear(LocalController *self);

Coordinate* get_empty_coordinate(LocalController *self);

Coordinate* get_player_coordinate(LocalController *self);

void initialize(LocalController *self);

void begin(LocalController *self);

void finalize(LocalController *self);

void end(LocalController *self);

#endif
