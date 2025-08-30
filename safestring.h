#ifndef SAFE_STRING_H
#define SAFE_STRING_H


#include <stddef>

typedef struct {
	char *buffer;
	size_t length;
	size_t capacity;
} SafeString;

SafeString **ss_create(size_t capacity);
void ss_free(SafeString *s);
size_t ss_len(const SafeString *s);
size_t ss_capacity(const SafeString *s);
int ss_copy(SafeString *dest, const char *src);
int ss_concat(SafeString *dest, const char *src);
#endif

