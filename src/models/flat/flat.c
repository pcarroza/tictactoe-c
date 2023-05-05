#include <assert.h>
#include <stdlib.h>

#include "flat.h"
#include "matrix.h"

Flat* _Flat_() {
    Flat* self = (Flat*) malloc(sizeof(Flat));
    self->object = _Matrix_(self);
    return self;
}

void _DeleteFlat_(Flat* flat) {
	free(flat);
}



