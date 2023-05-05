#ifndef LOCAL_MOVE_CONTROLLER_H_
#define LOCAL_MOVE_CONTROLLER_H_

#include "local-controller.h"
#include "../../models/game.h"

typedef struct LocalMoveController LocalMoveController;

LocalMoveController* _LocalMoveController_(Game* game);

void _DeleteLocalMoveController_(LocalController* controller);

#endif
