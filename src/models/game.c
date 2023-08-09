#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#include "game.h"
#include "board.h"
#include "color.h"
#include "coordinate.h"
#include "subject.h"
#include "../utils/new.h"

typedef struct Game {

	Board *board;

} Game;

Game* _Game_(Observer *observer) {
	Game *self = _NEW_(Game);
	assert(self != NULL);
	self->board = _Board_();
	subscriber_board(self->board, observer);
	return self;
}

void _FreeGame_(Game *self) {
	_FreeBoard_(self->board);
	free(self);
}

void put_game(Game *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	put_board(self->board, coordinate);
}

void move_game(Game *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	move_board(self->board, coordinate);
}

void remove_game(Game *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	remove_board(self->board, coordinate);
}

Color take_game(Game *self) {
	assert(self != NULL);
	return take_board(self->board);
}

void change_turn_game(Game *self) {
	assert(self != NULL);
	change_turn_board(self->board);
}

bool is_complete_game(Game *self) {
	assert(self != NULL);
	return is_complete_board(self->board);
}

bool has_any_players_game(Game *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	return has_any_players_board(self->board, coordinate);
}

bool is_occupied_by_current_player_game(Game *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	return is_occupied_by_current_player_board(self->board, coordinate);
}

bool exist_tictactoe_game(Game *self) {
	assert(self != NULL);
	return exist_tictactoe_board(self->board);
}

void clear_game(Game *self) {
	assert(self != NULL);
	clear_board(self->board);
}

Coordinate* get_empty_coordinate_game(Game *self) {
	assert(self != NULL);
	return get_empty_coordinate_board(self->board);
}

Coordinate* get_player_coordinate_game(Game *self) {
	assert(self != NULL);
	return get_player_coordinate_board(self->board);
}

void initialize_game(Game *self) {
	assert(self != NULL);
	initialize_board(self->board);
}

void begin_game(Game *self) {
	assert(self != NULL);
	begin_board(self->board);
}

void finalize_game(Game *self) {
	assert(self != NULL);
	finalize_board(self->board);
}

void end_game(Game *self) {
	assert(self != NULL);
	end_board(self->board);
}
