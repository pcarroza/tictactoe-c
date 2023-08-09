#ifndef LOGIC_H_
#define LOGIC_H_

#include "controllers/local/LocalOperationController.h"

typedef struct Logic {

	void* local;

	LocalOperationController* (*get_operation_controller)(struct Logic *self);

} Logic;

Logic* _Logic_(void* local_logic);

void _FreeLogic_(Logic *self);

#endif
