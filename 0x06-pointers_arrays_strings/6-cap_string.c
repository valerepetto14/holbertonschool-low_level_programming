#include "main.h"
/**
 * cap_string - 
 * *str
 * Return: 1
 **/
char *cap_string(char *str)
{	
	int cont = 0;

  	while (str[cont] != '\0')
	{
		if (str[cont] == '\t' || str[cont] == ',' || str[cont] == ';' || str[cont] == '.' || str[cont] == ' ' || str[cont] == '!' || str[cont] == '?' || 	str[cont] == '"' || str[cont] == '(' || str[cont] == ')' || str[cont] == '{' || str[cont] == '}' || str[cont] == '}' )
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
