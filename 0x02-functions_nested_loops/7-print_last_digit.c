#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 * @n: input number as an integer.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
