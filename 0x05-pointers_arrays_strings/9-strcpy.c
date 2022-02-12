#include "main.h"
/**
*_strcpy - 
*@dest:1
*@src: 1
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0, a = 0;

  	while (src[i] != '\n')
		i++;

	for(a = 0; a <= i; a++)
		dest[a] = src[a];

	return (dest);
}
