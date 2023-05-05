#ifndef CONTINUE_VIEW_H_
#define CONTINUE_VIEW_H_

#include "../controllers/local/local-continue-controller.h"

typedef struct ContinueView ContinueView;

ContinueView* _ContinueView_();

void _DeleteContinueView_(ContinueView* self);

void interact_cc(ContinueView* self, LocalContinueController* continue_controller);

#endif
