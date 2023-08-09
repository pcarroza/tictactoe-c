#include "../../controllers/local/LocalController.h"

#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "../../utils/new.h"

typedef struct LocalController {

	Game *game;

} LocalController;

LocalController* _LocalController_(Game *game) {
	LocalController *self = _NEW_(LocalController);
	assert(self != NULL);
	self->game = game;
	return self;
}

void _FreeLocalController_(LocalController *self) {
	free(self);
}

Game* get_game(LocalController *self) {
	return self->game;
}

void put(LocalController *self, Coordinate *coordinate) {
	put_game(self->game, coordinate);
}

void move(LocalController *self, Coordinate *coordinate) {
	move_game(self->game, coordinate);
}

void remove_(LocalController *self, Coordinate *coordinate) {
	remove_game(self->game, coordinate);
}

Color take(LocalController *self) {
	return take_game(self->game);
}

void change(LocalController *self) {
	change_turn_game(self->game);
}

bool is_complete(LocalController *self) {
	return is_complete_game(self->game);
}

bool has_any_players(LocalController *self, Coordinate *coordinate) {
	return has_any_players_game(self->game, coordinate);
}

bool is_occupied_by_current_player(LocalController *self,
		Coordinate *coordinate) {
	return is_occupied_by_current_player_game(self->game, coordinate);
}

bool exist_tictactoe(LocalController *self) {
	return exist_tictactoe_game(self->game);
}

void clear(LocalController *self) {
	clear_game(self->game);
}

Coordinate* get_empty_coordinate(LocalController *self) {
	return get_empty_coordinate_game(self->game);
}

Coordinate* get_player_coordinate(LocalController *self) {
	return get_player_coordinate_game(self->game);
}

void initialize(LocalController *self) {
	initialize_game(self->game);
}

void begin(LocalController *self) {
	begin_game(self->game);
}

void finalize(LocalController *self) {
	finalize_game(self->game);
}

void end(LocalController *self) {
	end_game(self->game);
}
