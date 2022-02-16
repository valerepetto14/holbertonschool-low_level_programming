#include "main.h"
/**
 *rot13 -
 *@str: 
 *Return:
 **/
char *rot13(char *str)
{
	int cont = 0, i = 0;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (;str[cont] != '\0'; cont++)
	{
		for (i = 0; normal[i] != '\0' ; i++)
		{
		 	if(str[cont] == normal[i])
				str[cont] = rot13[i];
		}
	}
	return (str);
}
