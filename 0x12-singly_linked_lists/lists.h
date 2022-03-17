#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
