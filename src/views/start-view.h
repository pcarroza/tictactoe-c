#ifndef START_VIEW_H_
#define START_VIEW_H_

#include "../controllers/interfaces/start-controller.h"

typedef struct StartView StartView;

StartView* _StartView_();

void _DeleteStartView_(StartView* self);


#endif


