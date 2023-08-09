#include <stdlib.h>

#include "Logic.h"
#include "utils/new.h"

Logic* _Logic_(void* local_logic) {
	Logic *self = _NEW_(Logic);
	self->local = local_logic;
	return self;
}

void _FreeLogic_(Logic *self) {
	free(self);
}
