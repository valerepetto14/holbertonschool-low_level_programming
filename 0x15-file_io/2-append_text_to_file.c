#include "main.h"
/**
 *append_text_to_file - append texto a file
 *@filename: string
 *@text_content: contenido
 *Return:int
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int iter = 0, archivo = 0, validador = 0;

	if (filename == NULL)
		return (-1);

	if (archivo == -1)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	for (; text_content[iter] != '\0'; iter++)
	{
		validador = fputc(text_content[iter], fp);
		if (validador == -1)
			return (-1);
	}
	fclose(fp);
	return (1);
}
