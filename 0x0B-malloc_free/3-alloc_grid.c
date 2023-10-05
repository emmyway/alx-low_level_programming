#include "main.h"

/**
 * alloc_grid - fxn retuns a 2D array of integers
 * @width: this represent te ROW of the array
 * @height: this represent the column of the integer
 * Return: the pointer to the array on succes or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || height <= 0)
		return (NULL);

	/* allcate memory for pointers to arrays */
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	/* allocate memory for the integer pointers */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
		}

		/* fill arrays with 0 */
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
