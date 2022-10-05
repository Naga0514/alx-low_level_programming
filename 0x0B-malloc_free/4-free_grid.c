#include "holberton.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * free_grid - free memory dynamically allocated
 * @grid: pointer to 2-D array
 * @row: row of the array
 */

void free_grid(int **grid, int row)
=======
  * free_grid - ...
  * @grid: ...
  * @height: ...
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
>>>>>>> refs/remotes/origin/master
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}

			free(grid);
		}
	}
}
