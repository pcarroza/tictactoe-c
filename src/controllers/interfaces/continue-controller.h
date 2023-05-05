#ifndef CONTINUE_CONTROLLER_H_
#define CONTINUE_CONTROLLER_H_

typedef struct ContinueController {

	void (*delete)(struct ContinueController* self);

} ContinueController;

ContinueController* _ContinueController_();

void _DeleteContinueController_(ContinueController* self);

#endif
