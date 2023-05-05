#ifndef LOCAL_COLOCATE_CONTROLLER_BUILDER_H_
#define LOCAL_COLOCATE_CONTROLLER_BUILDER_H_

#include "local-colocate-controller.h"
#include "local-operation-controller.h"
#include "local-controller.h"
#include "../../models/game.h"

typedef struct LocalColocateControllerBuilder {

	LocalColocateController** local_colocate_controller;

	LocalController* controller;

	Game* game;

} LocalColocateControllerBuilder;

LocalColocateControllerBuilder* _ColocateControllerBuilder_(Game* game, LocalController* controller);

void _DeleteColocateControllerBuilder_(LocalColocateControllerBuilder* self);

void builder(LocalColocateControllerBuilder* builder, int users);

LocalOperationController* get_colocate_controller(LocalColocateControllerBuilder* self);

#endif

