#include <stdlib.h>

#include "continue-view.h"

typedef struct ContinueView {

} ContinueView;

ContinueView* _ContinueView_() {
	ContinueView* self = (ContinueView*) malloc(sizeof(ContinueView));
	return self;
}

void _DeleteContinueView_(ContinueView* self) {

}

void interact_cc(ContinueView* self, LocalContinueController* continue_controller) {

}
