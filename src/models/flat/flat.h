#ifndef FLAT_H_
#define FLAT_H_

#include <stdbool.h>

#include "../coordinate.h"

typedef struct Flat {

    void* object;

    void (*delete)(struct Flat* self);

    void (*put)(struct Flat* self, Coordinate* coordinate);

    void (*move)(struct Flat* self, Coordinate* coordinate);

    bool (*is_empty)(struct Flat* self, Coordinate* coordinate);

    bool (*is_complete)(struct Flat* self, Coordinate* coordinate);

    void (*change)(struct Flat* self);

    bool (*exist_tictactoe)(struct Flat* self);

} Flat;

Flat* _Flat_();

void _DeleteFlat_(Flat* flat);

#endif

