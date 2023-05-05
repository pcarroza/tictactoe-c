#ifndef LOCAL_LOGIC_H_
#define LOCAL_LOGIC_H_

#include "local-operation-controller.h"

typedef struct Logic Logic;

Logic* _Logic_();

void _DeleteLogic_(Logic* self);

LocalOperationController* get_controller(Logic* self);

#endif /* LOCAL_LOGIC_H_ */
