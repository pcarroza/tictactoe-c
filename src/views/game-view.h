
#ifndef GAME_VIEW_H_
#define GAME_VIEW_H_

#include "../controllers/local/local-colocate-controller.h"

typedef struct GameView GameView;

GameView* _GameView_();

void _DeleteGameView_(GameView* self);

void interact_gv(GameView* game_view, LocalColocateController* continue_controller);

#endif


