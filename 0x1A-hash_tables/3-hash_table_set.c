#include "hash_tables.h"
/**
 *hash_table_set - add node
 *@ht: hash_table
 *@key: key
 *@value: valor
 *Return: 1 or 0
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *search_nod = NULL;
	hash_node_t *new_nod = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	new_nod = malloc(sizeof(hash_node_t));
	if (new_nod == NULL)
		return (0);
	search_nod = ht->array[index];
	while (search_nod != NULL)
	{
		if (strcmp(search_nod->key, key) == 0)
		{
			free(search_nod->value);
			search_nod->value = strdup(value);
			free(new_nod);
			return (1);
		}
		search_nod = search_nod->next;
	}

	new_nod->key = strdup(key);
	new_nod->value = strdup(value);
	new_nod->next = ht->array[index];
	ht->array[index] = new_nod;

	return (1);
}
