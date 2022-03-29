 #include "main.h"
/**
 * main - copy a otro archivo
 * @argc: contador
 * @argv: array
 * Return: int
 **/
int main(int argc, char *argv[])
{
	int file1 = 0, file2 = 0;
	int cont = 0, writes = 0, close1 = 0;
	char buf[1024];

	file1 = open(argv[1], O_RDONLY);
	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (file1 == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);/**TRATO DE CREAR**/
	if (file2 == -1)
	{
		close(file1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((cont = read(file1, buf, 1024)) != 0)
	{
		if (cont == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writes = write(file1, buf, cont);
		if (writes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close1 = close(file1);
	if (close1 == -1)
		dprintf(2, "Error: Can't close fd %d\n", file1), exit(100);
	close1 = close(file2);
	if (close1 == -1)
		dprintf(2, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}
