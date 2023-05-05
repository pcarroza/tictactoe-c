#include "local-colocate-controller-builder.h"

#include <stdlib.h>
#include <assert.h>

LocalColocateControllerBuilder* _ColocateControllerBuilder_(Game* game, LocalController* controller) {
	LocalColocateControllerBuilder* self = (LocalColocateControllerBuilder*) malloc(sizeof(LocalColocateControllerBuilder));
	self->game = game;
	self->controller = controller;
	return self;
}

void _DeleteColocateControllerBuilder_(LocalColocateControllerBuilder* self) {

}

void builder(LocalColocateControllerBuilder* builder, int users) {
}

LocalOperationController* get_colocate_controller(LocalColocateControllerBuilder* self) {
	return NULL;
}

