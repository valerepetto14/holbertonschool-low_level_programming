<<<<<<< HEAD
#include "main.h"
=======
#ZZinclude "main.h"
>>>>>>> d16758093711aaec10302ebd1c74486eb26c22f3
/**
 *string_toupper - 
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
