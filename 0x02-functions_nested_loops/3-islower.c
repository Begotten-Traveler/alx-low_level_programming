#include "main.h"
/**
 * _islower - Shows 1 if the input is a lowercase character,
 * in other cases shows 0
 * @c: The character in ASCII code
 * Return: 1 for lowercase chracter and 0 for the rest of it
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
