#ifndef SORT_H
#define SORT_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*PROTOTYPES*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void _swap(listint_t **node, listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void change_nodes(int *array, int a, int b, size_t size);
void quicksort_recursion(int *array, int left, int right, size_t size);
int divide_array(int *array, int left, int right, size_t size);

#endif
