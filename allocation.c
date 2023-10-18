#include "main.h"
/**
 * free_grid - frees a 2d array
 * @grid: pointer to 2d array
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
/**
 * _realloc - works the same as realloc
 * @ptr: an arry of any type
 * @old_size: old size of the array
 * @new_size: new size of the array
 *
 * Return: pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *arr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	arr = malloc(new_size);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		arr[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (arr);
}
