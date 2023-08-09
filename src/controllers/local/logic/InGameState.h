#ifndef INGAMESTATE_H_
#define INGAMESTATE_H_

#include "../../../controllers/local/LocalOperationController.h"
#include "../LocalOperationControllerBuilder.h"
#include "State.h"

typedef struct InGameState {

	LocalOperationControllerBuilder* builder;

	State* state;

} InGameState;

InGameState* _InGameState_(State* state, LocalOperationControllerBuilder* builder);

void _FreeInGameState_(InGameState *self);

State* finalize_in_game_state(State* self);

LocalOperationController* get_controller_in_game_state(State* state);

#endif
