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
/**
 *  * _strlen - str
 *   *@s: char
 *    *Return: cont
 *     **/
int _strlen(char *s)
{
	int cont = 0;
	char *a;

	a = s;

		while (*a != 0)
		{
			a++;
			cont++;
		}
	return (cont);
}
