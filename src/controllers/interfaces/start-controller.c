#include <stdlib.h>

#include "start-controller.h"


StartController* _StartController_(void* object){
	StartController* self = (StartController*) malloc(sizeof(StartController));
	self->delete = _DeleteStartController_;
	return self;
}

void _DeleteStartController_(StartController* start_controller) {

}
