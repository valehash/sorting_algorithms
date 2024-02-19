/**
 * bubble_sort -nfunction to sort an array using bubble sort
 * @array: the pointer to the array
 * @size: the size of the array
 */
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t k;
	size_t j;
	int temp;
	int swapped;


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

				for(k = 0; k < size; k++)
				{
					if (k == size -1)
						printf("%d\n", array[k]);
					else
						printf("%d ,",array[k]);
				}
			}
		}
		if (swapped == 0)
			break;
	}

}
