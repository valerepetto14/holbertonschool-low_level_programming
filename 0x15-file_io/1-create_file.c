#include "main.h"
#include <string.h>
/**
 *create_file - create a file
 *@filename: string
 *@text_content: contenido
 *Return: int
 **/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int iter = 0, archivo = 0;

	archivo = open(filename, O_WRONLY | O_CREAT, 0600);
	if (archivo == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w+");

	if (fp == NULL)
		return (-1);
	for (; text_content[iter] != '\0'; iter++)
		fputc(text_content[iter], fp);
	fclose(fp);
	return (1);
}
