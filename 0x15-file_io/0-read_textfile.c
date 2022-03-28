#include "main.h"
/**
 *read_textfile - read file a write
 *@filename: string
 *@letters: size
 *Return: size_t
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters); /**TRATO DE ABRIR EL ARCHIVO**/
	size_t cont = 0;
	size_t validador = 0;

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	cont = read(fd, buf, letters); /** TRATO DE LEER EL ARCHIVO **/
	validador = write(0, buf, letters);/** TRATO DE ESCRIBIR EL CONTENIDO **/
	if (validador == 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (letters > cont)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	return (cont);
}
