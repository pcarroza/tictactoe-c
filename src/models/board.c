#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "../utils/new.h"
#include "board.h"
#include "subject.h"

typedef struct Board {

	Subject *subject;

} Board;

Board* _Board_() {
	Board *self = _NEW_(Board);
	self->subject = _Subject_(self);
	return self;
}

void _FreeBoard_(Board *self) {
}

void subscriber_board(Board *self, Observer *observer) {

}

void put_board(Board *self, Coordinate *coordinate) {
	printf("_Coordinate_(%d, %d) \n", get_row(coordinate),
			get_column(coordinate));
}

void move_board(Board *self, Coordinate *coordinate) {
}

void remove_board(Board *self, Coordinate *coordinate) {
}

Color take_board(Board *self) {
	return NONE;
}

void change_turn_board(Board *self) {
}

bool is_complete_board(Board *self) {
	return false;
}

bool has_any_players_board(Board *self, Coordinate *coordinate) {
	return false;
}

bool is_occupied_by_current_player_board(Board *self, Coordinate *coordinate) {
	return false;
}

bool exist_tictactoe_board(Board *self) {
	return false;
}

void clear_board(Board *self) {
}

Coordinate* get_empty_coordinate_board(Board *self) {
	return NULL;
}

Coordinate* get_player_coordinate_board(Board *self) {
	return NULL;
}

void initialize_board(Board *self) {
	initialize_subject(self->subject);
}

void begin_board(Board *self) {
	begin_subject(self->subject);
}

void finalize_board(Board *self) {
	finalize_subject(self->subject);
}

void end_board(Board *self) {
	end_subject(self->subject);
}

