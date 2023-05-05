#include "operation-controller-visitor.h"

#include <stdlib.h>


OperationControllerVisitor* _OperationControllerVisitor_(void* object) {
	OperationControllerVisitor* self;
	self = (OperationControllerVisitor*) malloc(sizeof(OperationControllerVisitor));
	self->object = object;
	return self;
}

void _DeleteOperationControllerVisitor_(OperationControllerVisitor* self) {
	free(self);
}
