#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "subject.h"
#include "board.h"
#include "../controllers/local/logic/LocalLogic.h"
#include "../utils/new.h"

Subject* _Subject_() {
	Subject* self = _NEW_(Subject);
	return self;
}

void _FreeSubject_(Subject* self) {
	free(self);
}

void subscribe_subject(Subject* self, Observer* observer) {
	self->observer = observer;
}

void initialize_subject(Subject* self) {
	(*self).observer->initialize(self->observer);
}

void begin_subject(Subject* self) {
	(*self).observer->begin(self->observer);
}

void finalize_subject(Subject* self) {
	(*self).observer->finalize(self->observer);
}

void end_subject(Subject* self) {
	(*self).observer->end(self->observer);
}
