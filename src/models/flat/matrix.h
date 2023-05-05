#ifndef FLAT_MATRIX_H_
#define FLAT_MATRIX_H_

#include <stdbool.h>

#include "flat.h"
#include "../../models/coordinate.h"

typedef struct Matrix Matrix;

Matrix* _Matrix_(Flat* flat);

void _DeleteMatrix_(Flat* flat);

void put_token_in_matrix(Flat* flat, Coordinate* coordinate);

void move_token_in_matrix(Flat* flat, Coordinate* coordinate);

bool is_empty_in_matrix(Flat* flat, Coordinate* coordinate);

#endif /* FLAT_MATRIX_H_ */


