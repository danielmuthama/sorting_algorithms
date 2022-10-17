#include "sort.h"
/**
 *  quick_sort -  sorts an array in ascending order using the Quick sort.
 *  @array: Array.
 *  @size: Size.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	
	sorter(array, 0, size - 1, size);
}

/**
 *  sorter - Sorter.
 *  @array: Array.
 *  @low: Low.
 *  @high: High.
 *  @size: Size.
 */
void sorter(int *array, int low, int high, int size)
{
	int div;

	if (low < high)
	{
		div = div_array(array, low, high, size);
		sorter(array, low, div - 1, size);
		sorter(array, div + 1, high, size);
	}
}

/**
 *  div_array - Divide the array.
 *  @array: Array.
 *  @low: Low.
 *  @high: High.
 *  @size: Size.
 */
int div_array(int *array, int low, int high, int size)
{
	int mv, tmp;

	for (mv = low; mv < high; mv++)
	{
		if (array[mv] < array[high])
		{
			tmp = array[low];
			array[low] = array[mv];
			array[mv] = tmp;
			if (low != mv)
				print_array(array, size);
			low++;
		}
	}
	tmp = array[high];
	array[high] = array[low];
	array[low] = tmp;
	if (low != high)
	{
		print_array(array, size);
	}

	return (low);
}
