#include <stdlib.h>
#include <assert.h>

#include "LocalContinueController.h"
#include "../../utils/new.h"

LocalContinueController* _LocalContinueController_() {
	LocalContinueController* self = _NEW_(LocalContinueController);
	return self;
}

void _FreeLocalContinueController_(LocalContinueController* self) {

}
