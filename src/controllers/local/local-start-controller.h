#ifndef LOCAL_START_CONTROLLER_H_
#define LOCAL_START_CONTROLLER_H_

#include "../../models/game.h"
#include "../interfaces/operation-controller-visitor.h"
#include "../interfaces/start-controller.h"
#include "local-colocate-controller-builder.h"
#include "local-controller.h"

typedef struct LocalStartController {

	LocalController* local_controller;

	StartController* start_controller;

} LocalStartController;

LocalStartController* _LocalStartController_(LocalColocateControllerBuilder* builder, LocalController* controller);

void _DeleteLocalStartController_();

void start_app(LocalStartController* self);

void accept_start_controller(LocalController* controller, OperationControllerVisitor* visitor);

#endif

