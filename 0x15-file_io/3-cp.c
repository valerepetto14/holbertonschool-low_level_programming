 #include "main.h"
/**
 * main - copy a otro archivo
 * @argc: contador
 * @argv: array
 * Return: int
 **/
int main(int argc, char *argv[])
{
	int file1, file2;
	int cont;
	char buf[1024];

	file1 = open(argv[1], O_RDONLY);

	if (argc != 3)
		return (97);

	if (file1 == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file2 = open(argv[2], O_WRONLY | O_CREAT, 0664);/**TRATO DE CREAR**/

	if (file2 == -1)
	{
		close(file1);
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	cont = read(file1, buf, 1024);
	close(file1);
	write(file2, buf, cont);
	close(file1);
	close(file2);
	return (0);
}
