#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../../../controllers/local/logic/StateBuilder.h"
#include "../../../controllers/local/logic/EndState.h"
#include "../../../utils/new.h"

EndState* _EndState_(State *state) {
	EndState *self = _NEW_(EndState);
	self->state = state;
	self->state->get_controller = get_controller_end_state;
	return self;
}

void _FreeEndState_(EndState *self) {
	free(self);
}

LocalOperationController* get_controller_end_state(State* state) {
	return NULL;
}
