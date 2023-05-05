#ifndef OPERATION_CONTROLLER_H_
#define OPERATION_CONTROLLER_H_

#include "./operation-controller-visitor.h"

typedef struct OperationController {

	void* _Derived_;

	void (*accept)(struct OperationController* self, OperationControllerVisitor* visitor);

} OperationController;

OperationController* _OperationController_();

void _DeleteOperationController_(OperationController self);

#endif
