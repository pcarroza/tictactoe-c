#ifndef LOCAL_PUT_CONTROLLER_H_
#define LOCAL_PUT_CONTROLLER_H_

#include "local-controller.h"
#include "../../models/coordinate.h"
#include "../../models/game.h"

typedef struct LocalPutController LocalPutController;

LocalPutController* _LocalPutController_(Game* game);

void _DeleteLocalPutController_(LocalController* controller);

void put_controller(LocalPutController self, Coordinate* coordinate);

#endif
