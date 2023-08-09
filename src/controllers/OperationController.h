#ifndef OPERATIONCONTROLLER_H_
#define OPERATIONCONTROLLER_H_

typedef struct OperationController {

	void (*accept)(struct OperationController* self);

} OperationController;


#endif
