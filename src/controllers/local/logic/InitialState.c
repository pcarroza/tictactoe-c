#include "../../../controllers/local/logic/InitialState.h"

#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "../../../controllers/local/LocalOperationController.h"
#include "../../../utils/new.h"
#include "../../OperationController.h"
#include "StateBuilder.h"

InitialState* _InitialState_(State* state, LocalOperationControllerBuilder *builder) {
	InitialState* self = _NEW_(InitialState);
	self->builder = builder;
	(*self).state = state;
	(*self).state->begin = begin_in_game;
	(*self).state->get_controller = get_controller_initial_state;
	return self;
}

void _FreeInitialState_(InitialState* self) {
	free(self);
}

State* begin_in_game(State* self) {
	return get_in_game_state(self->state_builder)->state;
}

LocalOperationController* get_controller_initial_state(State* state) {
	return NULL;
}


