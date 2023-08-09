#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "coordinate.h"
#include "../utils/new.h"

typedef struct Coordinate {

	int row;

	int column;

} Coordinate;

Coordinate* _Coordinate_(int row, int column) {
	Coordinate *self = _NEW_(Coordinate);
	assert(self != NULL);
	self->row = row;
	self->column = column;
	return self;
}

void _DeleteCoordinate_(Coordinate *self) {
	free(self);
}

int get_row(Coordinate *coordinate) {
	return coordinate->row;
}

int get_column(Coordinate *coordinate) {
	return coordinate->column;
}
