#ifndef LOCALLOGIC_H_
#define LOCALLOGIC_H_

#include "../LocalOperationControllerBuilder.h"
#include "../../../controllers/local/logic/State.h"
#include "../../../controllers/OperationController.h"
#include "../../../models/game.h"
#include "../../../models/observer.h"
#include "../../../Logic.h"

#define GET_LOCAL_LOGIC(observer) ((LocalLogic*) observer->object)

typedef struct LocalLogic LocalLogic;

LocalLogic* _LocalLogic_();

void _FreeLocalLogic_(LocalLogic *self);

Observer* get_observer(LocalLogic* self);

Logic* get_logic(LocalLogic* self);

void initialize_local_logic(Observer *observer);

void begin_local_logic(Observer *observer);

void finalize_local_logic(Observer *observer);

void end_local_logic(Observer *observer);

LocalOperationController* get_controller_local_logic(Logic *self);

#endif
