#include <stdio.h>
#include <stdlib.h>

#include "controllers/local/logic/LocalLogic.h"
#include "controllers/local/LocalOperationController.h"

#include "models/game.h"
#include "models/coordinate.h"
#include "models/board.h"
#include "models/subject.h"
#include "tictactoe.h"

int main(void) {

	Logic* logic = get_logic(_LocalLogic_());

	LocalOperationController* controller = logic->get_operation_controller(logic);

	printf("logic->getOperationController() %p \n", controller);
	
	Game* game = _Game_(NULL);

	put_game(game, _Coordinate_(1, 1));
	put_game(game, _Coordinate_(1, 2));
	put_game(game, _Coordinate_(1, 3));
	put_game(game, _Coordinate_(1, 4));
	put_game(game, _Coordinate_(1, 5));

	return EXIT_SUCCESS;
}
