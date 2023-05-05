#ifndef ERRORS_H_
#define ERRORS_H_

typedef struct Error {

	char* NOT_EMPTY;

	char* REPEATED_COORDINATE;

	char* NOT_PROPERTY;

} Error;

Error* _Error_();

void _DeleteError(Error* self);

#endif

