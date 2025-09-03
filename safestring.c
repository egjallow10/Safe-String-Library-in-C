#include "safestring.h"


int safe_string_copy(SafeString* dest, const char* src){
	if(dest == NUll)
		return -1;

	size_t src_len = strlen(src);
	if (src_len + 1 > dest->capacity)
	{
		size_t new_capacity = src_len + 10;
		char* new_data = (char*) realloc(dest->data, new_capacity);
		if (new_data == NULL)
		{
			printf("Error: Realocation failed!\n");
			return -1;
		}
		dest->data = new_data;
		dest->capacity = new_capacity;
	}
	strcpy(dest->data, src);
	dest->length = src_len;
	return 0;
}
