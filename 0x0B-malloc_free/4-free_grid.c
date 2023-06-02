#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * free_grid - the program frees a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
