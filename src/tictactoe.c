#include <stdio.h>
#include <stdlib.h>

#include "controllers/local/local-operation-controller.h"
#include "controllers/local/logic.h"
#include "views/view.h"

typedef struct TicTacToe {

	Logic* logic;

	View* view;

} TicTacToe;

TicTacToe* _TicTacToe_() {
	TicTacToe* self = (TicTacToe*) malloc(sizeof(TicTacToe));
	self->logic = _Logic_();
	self->view = _View_();
	return self;
}

void _DeleteTicTacToe_(TicTacToe* self) {
	_DeleteLogic_(self->logic);
	_DeleteView_(self->view);
	free(self);
}

void run(TicTacToe* self) {
	LocalOperationController* controller = NULL;
	do {
		controller = get_controller(self->logic);
		if (controller != NULL) {
//			interact(self->view, controller);
		}
	} while (controller != NULL);
	_DeleteTicTacToe_(self);
}


















