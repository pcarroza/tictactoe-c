#include <stdlib.h>

#include "local-operation-controller.h"

LocalOperationController* _LocalOperationController_(void* object) {
	LocalOperationController* self = (LocalOperationController*) malloc(sizeof(LocalOperationController));
	return self;
}

void _DeleteLocalOperationController_(LocalOperationController* self) {

}
