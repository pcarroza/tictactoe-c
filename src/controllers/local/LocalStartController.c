#include "../../controllers/local/LocalStartController.h"

#include <stdlib.h>
#include <assert.h>

#include "../../utils/new.h"

LocalStartController* _LocalStartController_(LocalOperationController *controller) {
	LocalStartController *self = _NEW_(LocalStartController);
	self->operation = controller;
	self->operation->accept = accept_start_controller;
	return self;
}

void _FreeLocalStartController_(LocalStartController *self) {

}

void accept_start_controller(LocalOperationController *controller,
		LocalOperationControllerVisitor *visitor) {

}
