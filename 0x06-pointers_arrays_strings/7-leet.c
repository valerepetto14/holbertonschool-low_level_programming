#include"main.h"
/**
*reverse_array-asd
*@a:asd
*@n:asd
**/
char*leet(char *c)
{
	int i = 0, a = 0;

	char letters[]="aAeEoOtTlL";
	char numbers[]="4433007711";

	for(i = 0; c[i] != '\0' ;i++)
	{
		for (a = 0; a < 10 ; a++)
		{
			if(c[i] == letters[a])
				c[i] = numbers[a];
		}
	}

	return(c);
}
