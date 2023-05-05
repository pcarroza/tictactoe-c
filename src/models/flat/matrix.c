#include <stdlib.h>
#include <assert.h>

#include "matrix.h"

typedef struct Matrix {

	Flat* flat;

} Matrix;

Matrix* _Matrix_(Flat* flat) {
	Matrix* self = (Matrix*) malloc(sizeof(Matrix));
	self->flat = flat;
	self->flat->delete = _DeleteMatrix_;
	self->flat->put = put_token_in_matrix;
	self->flat->move = move_token_in_matrix;
	self->flat->is_empty = is_empty_in_matrix;
	return self;

}

void _DeleteMatrix_(Flat* flat) {
	free(flat->object);
	_DeleteFlat_(flat);
}

void put_token_in_matrix(Flat* flat, Coordinate* coordinate) {

}

void move_token_in_matrix(Flat* flat, Coordinate* coordinate) {

}

bool is_empty_in_matrix(Flat* flat, Coordinate* coordinate) {
	return false;
}






