#include "sort.h"
/**
 * bubble_sort -function to sort an array using bubble sort
 * @array: the pointer to the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int swapped;

	if (size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		swapped = 0;
		for(i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);

			}
		}
		if (swapped == 0)
			break;
	}

}
