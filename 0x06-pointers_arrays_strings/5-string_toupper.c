#include "main.h"
/**
*string_toupper - ssss
* @str: ddd
* Return: 0
 **/
char *string_toupper(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			str[cont] = str[cont] - 'a' + 'A';
		}
	cont++;
	}
	return (str);
}
