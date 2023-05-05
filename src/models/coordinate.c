#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "coordinate.h"

typedef struct Coordinate {

	int row;

	int column;

} Coordinate;

Coordinate* _Coordinate_(int row, int column) {
	Coordinate* self = (Coordinate*) malloc(sizeof(Coordinate));
	self->row = row;
	self->column = column;
	return self;
}

void _DeleteCoordinate_(Coordinate* self) {
	assert(self != NULL);
	free(self);
}

int get_row(Coordinate* self) {
	return self->row;
}

int get_column(Coordinate* self) {
	return self->column;
}
