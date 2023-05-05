#include <stdlib.h>

#include "controller.h"

Controller* _Controller_(void* derived) {
	Controller* self = (Controller*) malloc(sizeof(Controller));
	self->_Derived_ = derived;
	return self;
}

void _DeleteController_(Controller* controller) {
	free(controller);
}
