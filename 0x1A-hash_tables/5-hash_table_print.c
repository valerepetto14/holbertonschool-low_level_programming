#include "hash_tables.h"
/**
 *hash_table_print - main
 *@ht: hash_table
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *actual = NULL;
	unsigned long int iter = 0;
	int cont = 0;

	printf("{");
	while (iter < ht->size)
	{
		actual = ht->array[iter];
		while (actual != NULL)
		{
			if (cont != 0)
				printf(", ");
			printf("'%s': '%s'", actual->key, actual->value);
			actual = actual->next;
			cont++;
		}
		iter++;
	}
	printf("}\n");
}
