#include "main.h"

/**
 * print_last_digit - returns last digit of a number
 * @n: parameter passed to function
 * Return: returns last digit of param n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
