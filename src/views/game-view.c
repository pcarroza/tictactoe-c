#include <stdlib.h>

#include "game-view.h"

typedef struct GameView {

} GameView;

GameView* _GameView_() {
	GameView* self = (GameView*) malloc(sizeof(GameView));
	return self;
}

void _DeleteGameView_(GameView* self) {

}

void interact_gv(GameView* game_view, LocalColocateController* continue_controller) {

}
