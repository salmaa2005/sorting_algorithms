#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 * return: void
 */
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * return: void
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}
