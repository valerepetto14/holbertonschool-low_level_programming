#include "main.h"
/**
 *read_textfile - read file a write
 *@filename: string
 *@letters: size
 *Return: size_t
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	int cont = 0;
	int writes = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters); /**TRATO DE ABRIR EL ARCHIVO**/

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	cont = read(fd, buf, letters); /** TRATO DE LEER EL ARCHIVO **/
	close(fd);
	writes = write(0, buf, cont);/** TRATO DE ESCRIBIR EL CONTENIDO **/
	if (cont == -1 || writes == -1)
		return (0);
	if (writes != cont)
		return (0);
	free(buf);
	return (cont);
}
