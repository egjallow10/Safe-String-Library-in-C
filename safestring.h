#ifndef SAFE_STRING_H
#define SAFE_STRING_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *data;
	size_t length;
	size_t capacity;
} SafeString;

SafeString* safe_string__create(const char* capacity);
void safe_string_destroy(SafeString* s);
int safe_string_copy(SafeString* dest, const char* src);
int safe_string_concat(SafeString* dest, const char* src);
size_t safe_string_length(const SafeString* s);
void safe_string_print(const SafeString* s);
#endif

