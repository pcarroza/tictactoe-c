#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "observer.h"

typedef struct Subject {

	Observer* observer;

} Subject;

Subject* _Subject_();

void _FreeSubject_(Subject* self);

void subscribe_subject(Subject* self, Observer* observer);

void initialize_subject(Subject* self);

void begin_subject(Subject* self);

void finalize_subject(Subject* self);

void end_subject(Subject* self);

#endif
