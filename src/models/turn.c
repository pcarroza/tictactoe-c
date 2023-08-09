#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "turn.h"
#include "color.h"

typedef struct Turn {

	int value;

} Turn;

Turn* _Turn_() {
	Turn *self = (Turn*) malloc(sizeof(Turn));
	self->value = 0;
	return self;
}

void _DeleteTurn_(Turn *self) {
	free(self);
}

Color take_turn(Turn *self) {
	return values()[self->value];
}

void change_turn(Turn *self) {
	self->value = (self->value + 1) % 2;
}

