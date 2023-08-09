#ifndef ENDSTATE_H_
#define ENDSTATE_H_

#include "../../../controllers/local/LocalOperationController.h"
#include "State.h"

typedef struct EndState {

	State* state;

} EndState;

EndState* _EndState_(State* state);

void _FreeEndState_(EndState* self);

LocalOperationController* get_controller_end_state(State* state);

#endif
