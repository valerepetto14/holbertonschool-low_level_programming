#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - malloc
 *@width: int
 *@height: int
 *Return: int
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);

			free(grid);
			return (NULL);
}

for (x = 0; x < width; x++)
grid[i][x] = 0;
}

return (grid);
}
