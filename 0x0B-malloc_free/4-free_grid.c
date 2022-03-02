#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - malloc
 *@grid:puntero a puntero
 *@height: altura
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

		free(grid);
}
