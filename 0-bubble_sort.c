#include "sort.h"

/**
 * swap - swaps 2 values
 * @val1: first value to be swapped
 * @val2: second value to be swapped
 * Return: void
 */
void swap(int *val1, int *val2)
{
	unsigned int tmp;

	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int x, y;

	if (array == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - x - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
				print_array(array, size);
			}
		}
	}
}
