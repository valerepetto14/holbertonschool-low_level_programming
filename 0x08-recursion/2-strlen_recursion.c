#include "main.h"
/**
 *_strlen_recursion - recursion
 *@s: char
 *Return: int
**/
int _strlen_recursion(char *s)
{

	if (*s)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
