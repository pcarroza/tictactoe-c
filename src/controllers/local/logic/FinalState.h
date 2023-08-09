#ifndef FINALSTATE_H_
#define FINALSTATE_H_

#include "../../../controllers/local/LocalOperationController.h"
#include "../LocalOperationControllerBuilder.h"
#include "State.h"

typedef struct FinalState {

	LocalOperationControllerBuilder* builder;

	State* state;

} FinalState;

FinalState* _FinalState_(State* state, LocalOperationControllerBuilder* builder);

void _FreeFinalState_(FinalState *self);

State* initialize_final_state(State* state);

State* end_final_state(State* state);

LocalOperationController* get_controller_final_state(State* self);

#endif
