#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "../LocalOperationControllerBuilder.h"
#include "../../../controllers/local/logic/StateBuilder.h"
#include "../../../controllers/local/logic/LocalLogic.h"
#include "../../../controllers/local/LocalOperationController.h"
#include "../../../utils/new.h"

typedef struct LocalLogic {

	Logic* logic;

	Observer *observer;

	LocalOperationControllerBuilder *builder;

	Game *game;

	State *actual_state;

	StateBuilder *state_builder;

} LocalLogic;

static void implements_observer(LocalLogic *self) {
	self->observer = _Observer_(self);
	(*self).observer->initialize = initialize_local_logic;
	(*self).observer->begin = begin_local_logic;
	(*self).observer->finalize = finalize_local_logic;
	(*self).observer->end = end_local_logic;
}

LocalLogic* _LocalLogic_() {
	LocalLogic *self = _NEW_(LocalLogic);
	implements_observer(self);
	self->game = _Game_(self->observer);
	self->logic = _Logic_(self);
	(*self).logic->get_operation_controller = get_controller_local_logic;
	self->builder = _LocalOperationControllerBuilder_(self->game);
	self->state_builder = _StateBuilder_(self->builder);
	self->actual_state = get_initial_state(self->state_builder)->state;
	return self;
}

void _FreeLocalLogic_(LocalLogic *self) {
	_FreeLocalOperationControllerBuilder_(self->builder);
	_FreeStateBuilder_(self->state_builder);
	_FreeObserver_(self->observer);
	_FreeState_(self->actual_state);
	_FreeLogic_(self->logic);
	_FreeGame_(self->game);
}

Logic* get_logic(LocalLogic* self) {
	return self->logic;
}

Observer* get_observer(LocalLogic *self) {
	return self->observer;
}

void initialize_local_logic(Observer *observer) {
	LocalLogic *self = (LocalLogic*) observer->object;
	self->actual_state = (*self).actual_state->initialize(self->actual_state);
}

void begin_local_logic(Observer *observer) {
	LocalLogic *self = (LocalLogic*) observer->object;
	self->actual_state = (*self).actual_state->begin(self->actual_state);
}

void finalize_local_logic(Observer *observer) {
	LocalLogic *self = (LocalLogic*) observer->object;
	self->actual_state = (*self).actual_state->finalize(self->actual_state);
}

void end_local_logic(Observer *observer) {
	LocalLogic *self = (LocalLogic*) observer->object;
	self->actual_state = (*self).actual_state->end(self->actual_state);
}

LocalOperationController* get_controller_local_logic(Logic *self) {
	LocalLogic* logic = (LocalLogic*) self->local;
	return (*logic).actual_state->get_controller(logic->actual_state);
}


