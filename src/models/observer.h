#ifndef OBSERVER_H_
#define OBSERVER_H_

typedef struct Observer {

	void* object;

} Observer;

Observer* _Observer_(void* object);

void initialize_observer(Observer* observer);

void begin_observer(Observer* observer);

void end_observer(Observer* observer);

void exit_observer(Observer* observer);

#endif
