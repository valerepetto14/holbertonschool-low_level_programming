 #include "main.h"
/**
 * main - copy a otro archivo
 * @argc: contador
 * @argv: array
 * Return: int
 **/
int main(int argc, char *argv[])
{
	FILE *file1, *file2;
	char c;

	file1 = fopen(argv[1], "r");

	if (argc != 3)
		return (97);

	if (file1 == NULL)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file2 = fopen(argv[2], "w");
	if (file2 == NULL)
	{
		fclose(file1);
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	c = fgetc(file1);
	while (c == EOF)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	{
		fputc(c, file2);
		c = fgetc(file1);
	}
	fclose(file1);
	fclose(file2);
	return (0);
}
