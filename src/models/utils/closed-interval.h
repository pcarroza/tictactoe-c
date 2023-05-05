#ifndef CLOSED_INTERVAL_H_
#define CLOSED_INTERVAL_H_

#include <stdbool.h>

typedef struct ClosedInterval {

	struct ClosedInterval* closed_interval;

	int minimum;

	int maximum;

} ClosedInterval;

ClosedInterval* _ClosedInterval_(int);

void get_instance(int min, int max);

bool is_included(int value);

#endif



