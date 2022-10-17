#include "sort.h"
/**
 *  selection_sort - sorts an array order using the Selection sort.
 *  @array: Array
 *  @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int cnt, mv, tmp, swap;

	for (cnt = 0; cnt < size - 1; cnt++)
	{
		swap = cnt;
		for (mv = cnt + 1; mv < size; mv++)
		{
			if (array[mv] < array[swap])
				swap = mv;
		}

		if (swap != cnt)
		{
			tmp = array[cnt];
			array[cnt] = array[swap];
			array[swap] = tmp;
			print_array(array, size);
		}
	}
}
