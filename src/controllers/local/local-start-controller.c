#include "local-start-controller.h"

#include <stdlib.h>
#include <assert.h>

LocalStartController* _LocalStartController_(LocalColocateControllerBuilder* builder,
		LocalController* controller) {
	assert(controller != NULL);
	assert(builder != NULL);
	LocalStartController* self = (LocalStartController*) malloc(sizeof(LocalStartController));
	self->local_controller = controller;
	self->start_controller = _StartController_(self);
	return self;
}

void _DeleteLocalStartController_(LocalController* controller) {
	assert(controller != NULL);

}

void start_app(LocalStartController* self) {

}

void accept_start_controller(LocalController* controller, OperationControllerVisitor* visitor) {
	assert(controller != NULL);
	assert(visitor != NULL);
}
