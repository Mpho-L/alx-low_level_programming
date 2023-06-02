#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * alloc_grid - the program allocaes a 2-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of tthe grid.
 *
 * Return: Pointer to the allocated 2-dimensional grid, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
