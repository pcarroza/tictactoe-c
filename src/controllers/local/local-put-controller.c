#include <stdlib.h>

#include "local-put-controller.h"

typedef struct LocalPutController {

	LocalController* local_controller;

	Game* game;

} LocalPutController;

LocalPutController* _LocalPutController_(Game* game) {
	LocalPutController* self = (LocalPutController*) malloc(sizeof(LocalPutController));
	self->game = game;
	return self;
}

void _DeleteLocalPutController_(LocalController* controller) {

}

void put_controller(LocalPutController self, Coordinate* coordinate) {

}
