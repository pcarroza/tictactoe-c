#ifndef VIEW_H_
#define VIEW_H_

#include "../controllers/local/local-controller.h"

typedef struct View View;

View* _View_();

void _DeleteView_(View* self);

void interact(View* self, LocalController* controller);

void visit_start_controller(OperationControllerVisitor* self, void* start_controller);

void visit_colocate_controller(OperationControllerVisitor* self, void* colocate_controller);

void visit_continue_controller(OperationControllerVisitor* self, void* continue_controller);

#endif
