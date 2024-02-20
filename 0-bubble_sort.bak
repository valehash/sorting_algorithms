#include "sort.h"
/**
 * _putchar - function to print a single character to stdout
 * @c: the character to display
 * returns: The character sent to stdout
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * num_printf - function to print an integer value character by char
 * @value: The value to print out 
 */
void num_printf(int value)
{
	int divisor = 1, inner_value = value, remainder = value;

	while (inner_value >= 10)
	{
		divisor *= 10;
		inner_value /= 10;
	}

	inner_value = value;
	while (divisor != 0)
	{
		remainder = inner_value % divisor;
		inner_value /= divisor;

		_putchar(inner_value + '0');

		inner_value = remainder;
		divisor /= 10;
	}
}

/**
 * bubble_sort -function to sort an array using bubble sort
 * @array: the pointer to the array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t k;
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

				for(k = 0; k < size; k++)
				{
					if (k == size -1)
					{
						num_printf(array[k]);
						_putchar('\n');
					}
					else
					{
						num_printf(array[k]);
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		if (swapped == 0)
			break;
	}

}
