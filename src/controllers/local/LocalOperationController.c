#include "../../controllers/local/LocalOperationController.h"

#include <stdlib.h>
#include <assert.h>

#include "../../controllers/local/LocalController.h"
#include "../../utils/new.h"

LocalOperationController* _LocalOperationController_(Game* game) {
	LocalOperationController* self = _NEW_(LocalOperationController);
	self->local_controller = _LocalController_(game);
	return self;
}

void _FreeOperationLocalController_(LocalOperationController* self) {
	_FreeLocalController_(self->local_controller);
	free(self);
}

LocalController* get_local_controller(LocalOperationController* self) {
	return self->local_controller;
}
