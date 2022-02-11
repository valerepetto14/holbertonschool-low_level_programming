#include "main.h"
/**
 * rev_string - str
 * *@s: char
 * **/
void rev_string(char *s)
{
	int i = 0, b = 0, largo = 0;
	char AUX;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	largo = i;
	for (b = 0; b <= largo / 2 ; b++, i--)
	{
		AUX = s[i];
		s[i] = s[b];
		s[b] = AUX;
	}

}
