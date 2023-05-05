#include <stdlib.h>
#include <assert.h>

#include "local-controller.h"
#include "../../models/game.h"

LocalController* _LocalController_(Game* game) {
	LocalController* self = (LocalController*) malloc(sizeof(LocalController));
	self->game = game;
	return self;
}

void _DeleteLocalController_(LocalController* self) {
	assert(self != NULL);

}

