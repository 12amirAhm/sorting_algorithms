#ifndef SORT_H
#define SORT_H

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


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
int len_list(listint_t *h);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
int partition(int *array, int left, int right, size_t size);
void shell_sort(int *array, size_t size);
void switch_nodes(listint_t **list, listint_t **p);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_subA(int *subA, int *buff, size_t front, size_t mid,size_t back);
void mrg_sort_recurs(int *subA, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void mx_heap(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);
#endif
