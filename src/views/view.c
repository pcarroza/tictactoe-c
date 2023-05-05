#include <stdlib.h>
#include <assert.h>

#include "start-view.h"
#include "game-view.h"
#include "continue-view.h"
#include "view.h"

#include "../controllers/local/local-colocate-controller.h"
#include "../controllers/local/local-continue-controller.h"
#include "../controllers/local/local-start-controller.h"
#include "../controllers/interfaces/operation-controller-visitor.h"

typedef struct View {

	OperationControllerVisitor* visitor;

	StartView* start_view;

	GameView* game_view;

	ContinueView* continue_view;

} View;

View* _View_() {
	View* self = (View*) malloc(sizeof(View));
	self->visitor = _OperationControllerVisitor_(self);
	(*self).visitor->visit_start_controller = visit_start_controller;
	(*self).visitor->visit_colocate_controller = visit_colocate_controller;
	(*self).visitor->visit_continue_controller = visit_continue_controller;
	return self;
}

void _DeleteView_(View* self) {
	_DeleteStartView_(self->start_view);
	_DeleteGameView_(self->game_view);
	_DeleteContinueView_(self->continue_view);
	_DeleteOperationControllerVisitor_(self->visitor);
	free(self);
}

void interact(View* self, LocalController* controller) {
//	controller->accept(controller, self->visitor);
}

void visit_start_controller(OperationControllerVisitor* self, void* start_controller) {
//	interact_ss((StartView*) self->objetc, (StartController*) start_controller);
}

void visit_colocate_controller(OperationControllerVisitor* self, void* colocate_controller) {
//	interact_gv((GameView*) self->objetc, (ColocateController*) colocate_controller);
}

void visit_continue_controller(OperationControllerVisitor* self, void* continue_controller) {
//	interact_cc((ContinueView*) self->objetc, (LocalContinueController*) continue_controller);
}





