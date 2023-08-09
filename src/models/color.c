#include <stdlib.h>
#include <stdbool.h>

#include "color.h"

Color* values() {
	static Color colors[2] = { OS, XS };
	return colors;
}

