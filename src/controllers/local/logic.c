#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "logic.h"
#include "../../models/game.h"
#include "../../models/observer.h"
#include "../../models/state-game.h"
#include "local-colocate-controller-builder.h"
#include "local-operation-controller.h"
#include "local-continue-controller.h"
#include "local-start-controller.h"
#include "local-controller.h"

#include "../../controllers/interfaces/operation-controller.h"

typedef struct Logic {

	Game* game;

	LocalController* controller;

	LocalColocateControllerBuilder* builder;

	OperationController* start;

	OperationController* continue_;

} Logic;

Logic* _Logic_() {
	Logic* self = (Logic*) malloc(sizeof(Logic));
	self->game = _Game_(_Observer_(self));
	self->controller = _LocalController_(self->game);
	self->builder = _ColocateControllerBuilder_(self->game, self->controller);
	self->start = _OperationController_(_LocalStartController_(self->builder, self->controller));
	self->continue_ = _LocalOperationController_(_LocalContinueController_(self->game));
	return self;
}

void _DeleteLogic_(Logic* self) {
	assert(self != NULL);
	_DeleteGame_(self->game);
	_DeleteColocateControllerBuilder_(self->builder);
	_DeleteLocalOperationController_(self->start);
	_DeleteLocalOperationController_(self->continue_);
	free(self);
}

LocalOperationController* get_controller(Logic* self) {
	assert(self != NULL);
	LocalOperationController* controller = NULL;
	switch (get_state_the_game(self->game)) {
		case INITIAL_STATE_OF_THE_GAME:
			controller = self->start;
			break;
		case IN_GAME_STATUS_OF_THE_GAME:
			controller = get_colocate_controller(self->builder);
			break;
		case END_GAME_STATUS:
			controller = self->continue_;
			break;
		case GAME_EXIT_STATUS:
			controller = NULL;
			break;
		default:
			assert(false);
	}
	return controller;
}





