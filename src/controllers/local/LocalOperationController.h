#ifndef LOCALOPERATIONCONTROLLER_H_
#define LOCALOPERATIONCONTROLLER_H_

#include "../../controllers/local/LocalController.h"
#include "../../controllers/local/LocalOperationControllerVisitor.h"
#include "../../models/game.h"

typedef struct LocalOperationController {

	LocalController *local_controller;

	void (*accept)(struct LocalOperationController* self, LocalOperationControllerVisitor* visitor);

} LocalOperationController;

LocalOperationController* _LocalOperationController_(Game* game);

void _FreeOperationLocalController_(LocalOperationController *self);

LocalController* get_local_controller(LocalOperationController *self);

#endif
