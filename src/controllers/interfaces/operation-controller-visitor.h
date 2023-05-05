
#ifndef OPERATION_CONTROLLER_VISITOR_H_
#define OPERATION_CONTROLLER_VISITOR_H_

typedef struct OperationControllerVisitor {

	void* object;

	void (*visit_start_controller)(struct OperationControllerVisitor* self, void* start_controller);

	void (*visit_colocate_controller)(struct OperationControllerVisitor* self, void* colocate_controller);

	void (*visit_continue_controller)(struct OperationControllerVisitor* self, void* continue_controller);

} OperationControllerVisitor;

OperationControllerVisitor* _OperationControllerVisitor_(void* object);

void _DeleteOperationControllerVisitor_(OperationControllerVisitor* self);

#endif

