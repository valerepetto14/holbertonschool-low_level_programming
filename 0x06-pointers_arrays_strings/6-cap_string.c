#include "main.h"
/**
 * cap_string - 111
 * @str: 111
 * Return: 2
 **/
char *cap_string(char *str)
{
	int cont = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';

	while (str[cont] != '\0')
	{
		if (str[cont] == '\t' || str[cont] == ',' || str[cont] == ';' ||
		str[cont] == '.' || str[cont] == ' ' || str[cont] == '!' ||
		str[cont] == '?' || str[cont] == '"' || str[cont] == '(' ||
		str[cont] == ')' || str[cont] == '{' || str[cont] == '}' ||
		str[cont] == '\n')
		{
			if (str[cont + 1] >= 'a' && str[cont + 1] <= 'z')
			{
				str[cont + 1] = str[cont + 1] - 'a' + 'A';
			}
		}
		cont++;
	}
	return (str);
}
