#ifndef INITIALSTATE_H_
#define INITIALSTATE_H_

#include "../../../controllers/local/LocalOperationController.h"
#include "../LocalOperationControllerBuilder.h"
#include "State.h"

typedef struct InitialState {

	LocalOperationControllerBuilder *builder;

	State *state;

} InitialState;

InitialState* _InitialState_(State *state, LocalOperationControllerBuilder *builder);

void _FreeInitialState_(InitialState *self);

State* begin_in_game(State *self);

LocalOperationController* get_controller_initial_state(State *state);

#endif
