#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#include "board.h"
#include "turn.h"
#include "state-game.h"
#include "utils/closed-interval.h"
#include "observer.h"

#define NUMBER_PLAYERS 2

typedef struct Game {

	Board* board;

	Turn* turn;

	StateGame state_game;

} Game;

Game* _Game_(Observer* observer) {
    Game* self = (Game*) malloc(sizeof(Game));
    self->board = _Board_(NUMBER_PLAYERS);
    //subscribe(self->board, observer);
    self->turn = _Turn_();
    return self;
}

void _DeleteGame_(Game* self) {
	assert(self != NULL);
	_DeleteBoard_(self->board);
	_DeleteTurn_(self->turn);
	free(self);
}

bool is_empty_game(Game* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	return is_empty_board(self->board, coordinate);
}

void put_token_game(Game* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	assert(is_empty_game(self, coordinate));
	put_token_board(self->board, coordinate);
	assert(!is_empty_game(self, coordinate));
}

void move_token_game(Game* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	move_token_board(self->board, coordinate);
}

StateGame get_state_the_game(Game* self) {
	assert(self != NULL);
	return self->state_game;
}

void change_the_turn(Game* self) {
	assert(self != NULL);
	change_the_turn_board(self->board);
}

bool full_game(Game* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	return false;
}

int get_number_of_players_the_game(Game* self) {
	return NUMBER_PLAYERS;
}

void clear_the_game(Game* self) {
	assert(self != NULL);
}

bool exist_tictactoe(Game* game) {
	return false;
}

void initialize_game(Game* self) {
//	initialize_board(self->board);
}

void finalize_game(Game* self) {
//	finalize_board(self->board);
}

void begin_game(Game* self) {
//	begin_game(self->board);
}

void end_game(Game* self) {
//	end_board(self->board);
}



