#ifndef STATEBUILDER_H_
#define STATEBUILDER_H_

#include "../../../controllers/local/logic/EndState.h"
#include "../../../controllers/local/logic/FinalState.h"
#include "../../../controllers/local/logic/InGameState.h"
#include "../../../controllers/local/logic/InitialState.h"
#include "State.h"

typedef struct StateBuilder {

	State* state;

	InitialState *initial_state;

	InGameState *in_game_state;

	FinalState *final_state;

	EndState *end_state;

} StateBuilder;

StateBuilder* _StateBuilder_();

void _FreeStateBuilder_(StateBuilder *self);

InitialState* get_initial_state(StateBuilder *self);

InGameState* get_in_game_state(StateBuilder *self);

FinalState* get_final_state(StateBuilder *self);

EndState* get_end_state(StateBuilder *self);

#endif
