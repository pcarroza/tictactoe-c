#ifndef LOCAL_CONTINUE_CONTROLLER_H_
#define LOCAL_CONTINUE_CONTROLLER_H_

#include "local-controller.h"
#include "../../models/game.h"

typedef struct LocalContinueController LocalContinueController;

LocalContinueController* _LocalContinueController_(Game* game);

void _DeleteContinueController_(LocalController* self);

void continue_continue_controller(LocalContinueController* self);

#endif
