#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <stdbool.h>

#include "../models/coordinate.h"
#include "interfaces/operation-controller-visitor.h"

typedef struct Controller {

	void* _Derived_;

	void* (*_Init_)(struct Controller* self);

	void (*_Delete_)(struct Controller* self);

	void (*put)(struct Controller* self, Coordinate* coordinate);

	void (*move)(struct Controller* self, Coordinate* coordinate);

	bool (*is_empty)(struct Controller* self, Coordinate* coordinate);

	void (*clear)(struct Controller* self);

	bool (*full)(struct Controller* self);

	bool (*is_complete)(struct Controller* self);

	void (*initialize)(struct Controller* self);

	void (*begin)(struct Controller* self);

	void (*finalize)(struct Controller* self);

	void (*end)(struct Controller* self);

	void (*accept)(struct Controller* self, OperationControllerVisitor* visitor);

} Controller;

Controller* _Controller_(void* object);

void _DeleteController_(Controller* self);

#endif

