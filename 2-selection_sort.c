#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to the array
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{

size_t i, j, jMin;

for (i = 0; i <= size; i++)
{
	jMin = i; /*consider the first element as min*/
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[jMin])
			jMin = j;
	}
	if (jMin != i)
	{
		swap_int(array, i, jMin);
		print_array(array, size);
	}
}

}

/**
 * swap_int - swap variable values
 * @array: array to use
 * @a: index 1
 * @b: index 2
*/
void swap_int(int *array, size_t a, size_t b)
{
int tmp;
tmp = array[a];
array[a] = array[b];
array[b] = tmp;
}
