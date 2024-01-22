#ifndef _SORTING_H_
#define _SORTING_H_

#include <stdio.h>
#include <stdlib.h>

/** Doubly Linked List Structure */

/**
 * struct listint_s - Node in a doubly linked list
 *
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** Provided Function Prototypes */

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a doubly linked list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/** Task-Specific Function Prototypes */

void bubble_sort(int *arr, size_t len);
int len_list(listint_t *head);
void swap(listint_t *node_a, listint_t *node_b, listint_t **head);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *arr, size_t len)
void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void lomuto_qsort(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size)

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

void selection_sort(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_recursion(int *arr, int *array, size_t left, size_t right);
void merge_subarray(int *arr, int *array, size_t left,
                    size_t middle, size_t right);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t s, size_t root, size_t size);
void radix_sort(int *array, size_t size);
void count_sort_LSD(int *array, size_t size, size_t lsd);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void bitonic_recursion(int *array, int l, int r, int direction, size_t size);
void bitonic_merge(int *array, int l, int r, int direction);

#endif /* _GHabwe_SORTING_H_ */

