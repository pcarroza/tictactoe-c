#include "local-move-controller.h"

#include <stdlib.h>


typedef struct LocalMoveController {

    Game* game;

} LocalMoveController;

LocalMoveController* _LocalMoveController_(Game* game) {
    LocalMoveController* self = (LocalMoveController*) malloc(sizeof(LocalMoveController));

    self->game = game;
    return self;
}

void _DeleteLocalMoveController_(LocalController* controller) {

}




