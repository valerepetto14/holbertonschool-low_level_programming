#include "hash_tables.h"
/**
 *hash_table_create - create pointer
 *@size: size of array
 *Return: hash_table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;
	unsigned int i = 0;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
