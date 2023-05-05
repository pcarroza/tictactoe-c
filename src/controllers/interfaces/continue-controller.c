#include "continue-controller.h"

#include <stdlib.h>

ContinueController* _ContinueController_() {
	ContinueController* self = (ContinueController*) malloc(sizeof(ContinueController));
	return self;
}
