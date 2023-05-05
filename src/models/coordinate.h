#ifndef COORDINATE_H_
#define COORDINATE_H_

typedef struct Coordinate Coordinate;

Coordinate* _Coordinate_(int row, int column);

void _DeleteCoordinate_(Coordinate* self);

int get_row(Coordinate* self);

int get_column(Coordinate* self);

#endif
