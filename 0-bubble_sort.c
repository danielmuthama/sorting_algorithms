#include "sort.h"
/**
 * bubble_sort - sorts an array of ints in ascending order with Bubble sort.
 * @array: Array.
 * @size: Array's size.
 */
void bubble_sort(int *array, size_t size)
{
	int swtch = 0;
	unsigned int idx, cnt;
	unsigned int last;

	if (array == NULL)
		return;
	last = size - 1;
	for (cnt = 0; cnt < last; cnt++)
	{
		for (idx = 0; idx < last - cnt; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swtch = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = swtch;
				print_array(array, size);
			}
		}
	}
}
