#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, jump, i;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (right >= size)
			right = size - 1;
		else
			right += jump;
		if (array[left] <= value && array[right] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", left, right);
			break;
		}
		left += jump;
	}

	if (left >= size || array[left] > value)
		return (-1);

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
