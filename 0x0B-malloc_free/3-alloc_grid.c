#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int q, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (q = 0; q < height; q++)
	{
		mee[q] = malloc(sizeof(int) * width);

		if (mee[q] == NULL)
		{
			for (; q >= 0; q--)
				free(mee[q]);

			free(mee);
			return (NULL);
		}
	}

	for (q = 0; q < height; q++)
	{
		for (y = 0; y < width; y++)
			mee[q][y] = 0;
	}

	return (mee);
}
