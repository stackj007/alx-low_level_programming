#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2D array of integers.
* @width: The width of the 2D array.
* @height: The height of the 2D array.
*
* Return: If width or height == 0 or the function fails - NULL.
*         Otherwise - a pointer to the 2D array of integers.
*/


int **alloc_grid(int width, int height)
{
int **grid, i, j;

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
for (; i >= 0; i--)
free(grid[i]);
free(grid);
return (NULL);
}
}

/* Initialize grid with 0 */
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
grid[i][j] = 0;

return (grid);
}
