#include <stdlib.h>

#include "turn.h"

typedef struct Turn {

	int value;

} Turn;

Turn* _Turn_() {
	Turn* self = (Turn*) malloc(sizeof(Turn));
	self->value = 0;
	return self;
}

void _DeleteTurn_(Turn* self) {
	free(self);
}

void change_turn(Turn* self) {
	self->value = 0;
}

int take() {
	return 0; 
}
