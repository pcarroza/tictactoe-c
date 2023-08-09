#ifndef OBSERVER_H_
#define OBSERVER_H_

#define OBSERVER (struct Observer* self)

typedef struct Observer {

	void *object;

	void (*initialize)(struct Observer *self);

	void (*begin)(struct Observer *self);

	void (*finalize)(struct Observer *self);

	void (*end)(struct Observer *self);

} Observer;

Observer* _Observer_(void *object);

void _FreeObserver_(Observer *self);

#endif
