#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int time;

	for (time = 0; time <= 9; time++)
	{

		for (letter = 'a'; letter <= 'z'; letter++)

			_putchar(letter);

		_putchar('\n');
	}

}
