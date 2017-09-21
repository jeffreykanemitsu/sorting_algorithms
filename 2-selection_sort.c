#include "sort.h"
/**
 * selection_sort - sorts an arrayof ints in ascending order
 * @array: array that is being sorted
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, min;
	int z;

	if (size == 0 || array == NULL)
		return;
	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x; y < size; y++)
		{
			if (array[y] < array[min])
				min = y;
		}
		if (x != min)
		{
			z = array[x];
			array[x] = array[min];
			array[min] = z;
			print_array(array, size);
		}
	}
}
