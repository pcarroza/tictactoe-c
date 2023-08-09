#include <stdlib.h>
#include <assert.h>

#include "State.h"
#include "StateBuilder.h"
#include "../../../utils/new.h"
#include "../LocalOperationControllerBuilder.h"

StateBuilder* _StateBuilder_(LocalOperationControllerBuilder *builder) {
	StateBuilder *self = _NEW_(StateBuilder);
	self->state = _State_(self);
	self->initial_state = _InitialState_(self->state, builder);
	self->in_game_state = _InGameState_(self->state, builder);
	self->final_state = _FinalState_(self->state, builder);
	self->end_state = _EndState_(self->state);
	return self;
}

void _FreeStateBuilder_(StateBuilder *self) {
	_FreeState_(self->state);
	_FreeInitialState_(self->initial_state);
	_FreeInGameState_(self->in_game_state);
	_FreeFinalState_(self->final_state);
	_FreeEndState_(self->end_state);
	free(self);
}

InitialState* get_initial_state(StateBuilder *self) {
	(*self).initial_state->state = self->state;
	(*self).state->derivative = self->initial_state;
	return self->initial_state;
}

InGameState* get_in_game_state(StateBuilder *self) {
	(*self).in_game_state->state = self->state;
	(*self).state->derivative = self->in_game_state;
	return self->in_game_state;
}

FinalState* get_final_state(StateBuilder *self) {
	(*self).final_state->state = self->state;
	(*self).state->derivative = self->final_state;
	return self->final_state;
}

EndState* get_end_state(StateBuilder *self) {
	(*self).end_state->state = self->state;
	(*self).state->derivative = self->end_state;
	return self->end_state;
}
