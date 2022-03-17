#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
/**
 *struct list - struct to use it later
 *@str: symbol to print
 *@len:number
 *@next: pointer
**/
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void);
#endif
