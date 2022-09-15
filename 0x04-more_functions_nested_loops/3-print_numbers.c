#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints all number from
 * 0 to 9
 * @n: number to print
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 28; n < 38; n++)
	{
		putchar(n);
	}
	putchar(10);
}
