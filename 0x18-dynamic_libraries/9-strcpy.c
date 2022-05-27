#include "main.h"
/**
 *_strcpy - dddI
*@dest: 1
*@src: 1
* Return: dest
 **/
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; a <= _strlen(src); a++)
		dest[a] = src[a];

	return (dest);
}

