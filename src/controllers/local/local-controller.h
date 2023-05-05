#ifndef LOCAL_CONTROLLER_H_
#define LOCAL_CONTROLLER_H_

#include "../../models/game.h"
#include "../interfaces/operation-controller-visitor.h"

typedef struct LocalController {

    Game* game;

} LocalController;

LocalController* _LocalController_(Game* game);

void _DeleteLocalController_(LocalController* controller);

bool is_empty(LocalController* controller, Coordinate* coordinate);

bool full(LocalController* controller, Coordinate* coordinate);

void put(LocalController* controller, Coordinate* coordinate);

void move(LocalController* controller, Coordinate* coordinate);

StateGame get_state(LocalController* controller);

void change(LocalController* controller);

int get_number_of_users(LocalController* controller);

void clear(LocalController* controller);

void initialize(LocalController* controller);

void begin(LocalController* controller);

void finalize(LocalController* controller);

void end(LocalController* controller);

#endif

