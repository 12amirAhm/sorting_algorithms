#include "sort.h"

/**
 * len_list - returns the length of a linked list
 * @h: pointer to the list
 *
 * Return: length of list
 */

int len_list(listint_t *head)
{
  int count = 0;

  while (head)
  {
    count++;
    head = head->next;
  }
  return (count);
}

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */

void insertion_sort_list(listint_t **head_ptr)
{
  listint_t *current = NULL, *previous = NULL;
  listint_t *temp = NULL, *next = NULL;

  if (!head_ptr || !(*head_ptr) || len_list(*head_ptr) < 2)
    return;

  current = *head_ptr;

  while (current)
  {
    if (current->prev && current->n < current->prev->n)
    {
      previous = current->prev->prev;
      temp = current->prev;
      next = current->next;

      temp->next = next;
      if (next)
        next->prev = temp;
      current->next = temp;
      current->prev = previous;
      if (previous)
        previous->next = current;
      else
        *head_ptr = current;
      temp->prev = current;
      current = *head_ptr;
      print_list(*head_ptr);
      continue;
    }
    else
      current = current->next;
  }
}
