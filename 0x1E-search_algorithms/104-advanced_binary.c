#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	return (recursive_binary(array, left, right, value));
}

/**
 * recursive_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */

int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left > right)
		return (-1);

	if (left == right)
	{
		if (array[left] == value)
			return (left);
		return (-1);
	}

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");

	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (recursive_binary(array, left, mid - 1, value));
		return (mid);
	}
	else if (array[mid] < value)
		return (recursive_binary(array, mid + 1, right, value));
	else
		return (recursive_binary(array, left, mid - 1, value));
}
