#include "sort.h"

/**
 * swap - Swap two integers.
 * @a_gh: First integer.
 * @b_gh: Second integer.
 *	Return: (void)
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partition an array using a pivot element.
 * @array: Array to partition.
 * @low: Starting index.
 * @high: Ending index.
 * @size: Size of the array (size_t).
 * Return: Index of the pivot element (int).
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * lomuto_qsort - Sort an array using the Lomuto partition scheme.
 * @array: Array to be sorted.
 * @low: The lowest index of the array.
 * @high: The highest index of the array.
 * @size: Size of the array (size_t).
 *	Return: (void)
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int partition_index;

	if (low < high)
	{
		partition_index = partition(array, low, high, size);
		lomuto_qsort(array, low, partition_index - 1, size);
		lomuto_qsort(array, partition_index + 1, high, size);
	}
}

/**
 * quick_sort - Implement the Quick Sort algorithm using Lomuto partition.
 * @array: Array to be sorted.
 * @size: Size of the array (size_t).
 *	Return: (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
