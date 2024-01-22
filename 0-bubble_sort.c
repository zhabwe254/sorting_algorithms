#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @arr: The array to be sorted
 * @len: The size of the array
 */
void bubble_sort(int *arr, size_t len)
{
	size_t i, j;
	int temp;

	if (len < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				print_array(arr, len);
			}
		}
	}
}
