#include "sort.h"
/**
 * quick_sort - sorts an array of ints in ascending order
 * @array: array being sorted
 * @size: size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int low;
	int high;

	if (array == NULL || size == 0)
		return;
	low = 0;
	high = size - 1;
	quickie(array, low, high, size);
}
/**
 * quickie - recursively sorts an array of ints
 * @array: array being sorted
 * @low: position of low element
 * @high: position of high element
 * @size: size of array
 *
 * Return: void
 */
void quickie(int *array, int low, int high, size_t size)
{
	int kappa;

	if (low < high)
	{
		kappa = partition(array, low, high, size);
		quickie(array, low, kappa - 1, size);
		quickie(array, kappa + 1, high, size);
	}
}

/**
 * partition - Lomuto's partition scheme
 * @array: array being sorted
 * @low: position of low index
 * @high: position of high index
 * @size: size of array
 *
 * Return: void
 */
int partition(int *array, int low, int high, size_t size)
{
	int x, y, z;

	x = array[high];
	y = low - 1;

	for (z = low; z <= high; z++)
	{
		if (array[z] <= x)
		{
			y++;
			if (y != z)
			{
				qswap(array, y, z);
				print_array(array, size);
			}
		}
	}
	return (y);
}

/**
 * qswap - swaps values of array
 * @array: array that is being sorted
 * @x: element being swapped
 * @y: element being swapped
 *
 * Return: void
 */
void qswap(int *array, int x, int y)
{
	int tmp;

	tmp = array[x];
	array[x] = array[y];
	array[y] = tmp;
}
