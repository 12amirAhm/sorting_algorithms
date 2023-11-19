#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
  unsigned int currentIndex, nextIndex;
  int temp;

  if (size < 2) {
    return;
  }

  for (currentIndex = 0; currentIndex < size; currentIndex++) {
    for (nextIndex = 0; nextIndex < size - currentIndex - 1; nextIndex++) {
      if (array[nextIndex] > array[nextIndex + 1]) {
        temp = array[nextIndex];
        array[nextIndex] = array[nextIndex + 1];
        array[nextIndex + 1] = temp;
        print_array(array, size);
      }
    }
  }
}
