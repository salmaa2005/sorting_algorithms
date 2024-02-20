#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			swap(array[min], array[i]);
		}
	}
}
