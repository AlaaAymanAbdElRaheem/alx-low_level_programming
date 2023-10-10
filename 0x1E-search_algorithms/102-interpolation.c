#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, pos;

	if (array == NULL)
		return (-1);

	while (left <= right && right < size && array[left] <= value)
	{
		pos = left + ((double)(right - left) / (array[right] - array[left])) *
			(value - array[left]);

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			left = pos + 1;
		else
			right = pos - 1;
	}

	return (-1);
}
