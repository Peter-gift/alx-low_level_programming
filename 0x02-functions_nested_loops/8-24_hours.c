#include "main.h"



/**

 * jack_bauer - prints every minute of the day

 * Description: prints every minute of the day

 * Return: void

 */

void jack_bauer(void)

{

	int hours = 0;
	int minutes = 0;
	int hours-remainder;
	int minutes-remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	minutes-remainder = minutes % 10;
	hours-remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours-remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes-remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
	}
}
