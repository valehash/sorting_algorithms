#include "sort.h"
/**
 * selection_sort - function to sort an array using bubble sort
 * @array: the pointer to the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int min;
	size_t length;

	if (size < 2)
		return;

	length = size;

	for (i = 0; i <= length - 1; i++)
	{
		min = i;
		for(j = i + 1; j < length; j++)
		{
		
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] > array[min])
		{
			temp =  array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
