#include <stdlib.h>
#include <stdio.h>

#include "observer.h"
#include "../utils/new.h"

Observer* _Observer_(void* object) {
	Observer* self = _NEW_(Observer);
	self->object = object;
	return self;
}

void _FreeObserver_(Observer *self) {
	free(self);
}
