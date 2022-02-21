#include "main.h"
/**
*_strspn- asd
*@accept: asd
*@s: asd
*Return: asd
**/
unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	int same = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (x = 0; accept[x] != '\0'; x++)
			{
				if (s[i] == accept[x])
					same++;
			}
		}
		else
			return (same);

	}
	return (same);
}
