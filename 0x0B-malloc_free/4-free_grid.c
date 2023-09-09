#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: The pointer to the grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]); /* Free each row */
}

free(grid); /* Free the grid itself */
}
