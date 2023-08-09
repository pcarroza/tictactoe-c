#ifndef LOCALOPERATIONCONTROLLERBUILDER_H_
#define LOCALOPERATIONCONTROLLERBUILDER_H_

#include "../../models/game.h"

typedef struct LocalOperationControllerBuilder {

	Game *game;

} LocalOperationControllerBuilder;

LocalOperationControllerBuilder* _LocalOperationControllerBuilder_(Game *game);

void _FreeLocalOperationControllerBuilder_(
		LocalOperationControllerBuilder *self);

#endif /* LOCALOPERATIONCONTROLLERBUILDER_H_ */
