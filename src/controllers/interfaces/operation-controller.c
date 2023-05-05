#include <stdlib.h>

#include "operation-controller.h"


OperationController* _OperationController_() {
	OperationController* self = (OperationController*) malloc(sizeof(OperationController));
	return self;
}

void _DeleteOperationController_(OperationController self) {

}


