#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "InGameState.h"
#include "../../../utils/new.h"
#include "StateBuilder.h"

InGameState* _InGameState_(State* state, LocalOperationControllerBuilder* builder) {
	InGameState* self = _NEW_(InGameState);
	self->builder = builder;
	self->state = state;
	return NULL;
}

void _FreeInGameState_(InGameState *self) {
	free(self);
}

State* finalize_in_game_state(State* self) {
	return get_final_state(self->state_builder)->state;
}

LocalOperationController* get_controller_in_game_state(State* state) {
	puts("ESTADO IN_GAME_STATE");
	return NULL;
}

