#ifndef LOCALSTARTCONTROLLER_H_
#define LOCALSTARTCONTROLLER_H_

#include "../../controllers/local/LocalOperationController.h"

typedef struct LocalStartController {

	LocalOperationController *operation;

} LocalStartController;

LocalStartController* _LocalStartController_();

void _FreeLocalStartController_(LocalStartController *self);

void accept_start_controller(LocalOperationController*,
		LocalOperationControllerVisitor*);

#endif
