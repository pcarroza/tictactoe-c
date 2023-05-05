#ifndef START_CONTROLLER_H_
#define START_CONTROLLER_H_

#include "operation-controller.h"

typedef struct StartController {

	OperationController* operation_controller;

	void* local_start_controller;

	void (*delete)(struct StartController* start_controller);

	void (*start)(struct StartController* start_controller, int users);

} StartController;

StartController* _StartController_(void* object);

void _DeleteStartController_(StartController* start_controller);

#endif /* START_CONTROLLER_H_ */
