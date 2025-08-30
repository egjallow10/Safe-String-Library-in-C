#ifndef SAFE_STRING_H
#define SAFE_STRING_H


#include <stddef>

typedef struct {
	char *buffer;
	size_t length;
	size_t capacity;
} SafeString;

#endif

