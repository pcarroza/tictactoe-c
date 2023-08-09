#include "../../../controllers/local/logic/FinalState.h"

#include <stdlib.h>
#include <assert.h>

#include "../../../utils/new.h"
#include "StateBuilder.h"

FinalState* _FinalState_(State* state, LocalOperationControllerBuilder* builder) {
	FinalState* self = _NEW_(FinalState);
	self->state = state;
	self->builder = builder;
	self->state->initialize = initialize_final_state;
	self->state->end = end_final_state;
	self->state->get_controller = get_controller_final_state;
	return NULL;
}

void _FreeFinalState_(FinalState* self) {
	free(self);
}

State* initialize_final_state(State* state) {
	return get_initial_state(state->state_builder)->state;
}

State* end_final_state(State* state) {
	return get_end_state(state->state_builder)->state;
}

LocalOperationController* get_controller_final_state(State* self){
	return NULL;
}
