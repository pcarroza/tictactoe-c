#include "local-continue-controller.h"

#include <stdlib.h>
#include <assert.h>

typedef struct LocalContinueController {

	LocalController* local_controller;

	Game* game;

} LocalContinueController;

LocalContinueController* _LocalContinueController_(Game* game) {
	LocalContinueController* self = (LocalContinueController*) malloc(sizeof(LocalContinueController));
	self->game = game;
	return self;
}

void _DeleteContinueController_(LocalController* controller) {
//	free((LocalContinueController*) controller->object);
}

void continue_cc(LocalContinueController* self) {

}

LocalController* get_continue_controller_interface(LocalContinueController* self) {
	assert(self != NULL);
	return self->local_controller;
}



