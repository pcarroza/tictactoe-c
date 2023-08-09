#include "../../../controllers/local/logic/State.h"

#include <stdlib.h>
#include <assert.h>

#include "../../../utils/new.h"

State* _State_(void* state_builder) {
	State* self = _NEW_(State);
	self->state_builder = state_builder;
	return self;
}

void _FreeState_(State *self) {
	free(self);
}
