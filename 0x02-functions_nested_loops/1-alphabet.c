#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * @max - disc
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

