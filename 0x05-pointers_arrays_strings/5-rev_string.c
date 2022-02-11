#include "main.h"
/**
 * rev_string - str
 * *@s: char
 * **/
void rev_string(char *s)
{
	int i = 0, b = 0;
	char * cont = s
	while (s[i] != '\0')
	{
		i++;
	}
	for (b = 0; b <= i ; b++)
	{		 
		s[b] = cont[i - b]; 
	} 
	
}
