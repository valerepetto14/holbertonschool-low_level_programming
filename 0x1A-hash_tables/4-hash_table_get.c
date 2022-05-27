#include "hash_tables.h"
/**
 *hash_table_get - get a value of a key
 *@ht: hash_table
 *@key: key
 *Return: char
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *search = NULL;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	search = ht->array[idx];
	while (search)
	{
		if (strcmp(search->key, key) == 0)
		{
			return (search->value);
		}
		if (search->next)
			search = search->next;
		else
			break;
	}
	return (NULL);
}
