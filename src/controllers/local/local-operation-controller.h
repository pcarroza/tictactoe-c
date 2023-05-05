

#ifndef LOCAL_OPERATION_CONTROLLER_H_
#define LOCAL_OPERATION_CONTROLLER_H_

typedef struct LocalOperationController {

	void* objetc;

} LocalOperationController;

LocalOperationController* _LocalOperationController_(void* object);

void _DeleteLocalOperationController_(LocalOperationController* self);

#endif
