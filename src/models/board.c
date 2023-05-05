#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "board.h"
#include "flat/flat.h"

typedef struct Board {

    Flat* flat;

} Board;

Board* _Board_() {
    Board* self = (Board*) malloc(sizeof(Board));
    self->flat = _Flat_();
    return self;
}

void _DeleteBoard_(Board* self) {
	assert(self != NULL);
	(*self).flat->delete(self->flat);
	free(self);
}

void put_token_board(Board* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
    (*self).flat->put(self->flat, coordinate);
}

void move_token_board(Board *self, Coordinate *coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	(*self).flat->move(self->flat, coordinate);
}

bool is_empty_board(Board* self, Coordinate* coordinate) {
	assert(self != NULL);
	assert(coordinate != NULL);
	return (*self).flat->is_empty(self->flat, coordinate);
}

void change_the_turn_board(Board* self) {
	assert(self != NULL);
	(*self).flat->change(self->flat);
}

bool exist_tictactoe_board(Board* self) {
	assert(self != NULL);
	return (*self).flat->exist_tictactoe(self->flat);
}

void clear_the_board(Board* self) {
	assert(self != NULL);
	(*self).flat->change(self->flat);
}



