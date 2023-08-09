#ifndef STATE_H_
#define STATE_H_

#include "../../../controllers/local/LocalOperationController.h"

typedef struct State {

	void *state_builder;

	void *derivative;

	struct State* (*initialize)(struct State *self);

	struct State* (*begin)(struct State *self);

	struct State* (*finalize)(struct State *self);

	struct State* (*end)(struct State *self);

	LocalOperationController* (*get_controller)(struct State *self);

} State;

State* _State_(void *state_builder);

void _FreeState_(State *self);

#endif
