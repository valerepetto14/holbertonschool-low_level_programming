#include "hash_tables.h"
/**
*key_index - gives you the index of a key.
*@key: unsigned char
*@size: size
*Return: unsigned
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	if (size == 0)
		return (0);
	return (hash % size);
}
