#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - (NULL).
 * else - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **twoD, hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	hgt_index = 0;
	while (hgt_index < height)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);

		if (twoD[hgt_index] == NULL)
		{
			hgt_index = 0;
			while (hgt_index >= 0)
			{
				free(twoD[hgt_index]);
				hgt_index--;
			}
			free(twoD);
			return (NULL);
		}
		hgt_index++;
	}

	while (hgt_index < height)
	{
		wid_index = 0;
		while (wid_index < width)
		{
			twoD[hgt_index][wid_index] = 0;
			wid_index++;
		}
		hgt_index++;
	}
	return (twoD);
}
