#include "main.h"

/**
 * main - Entry point
 *
 * description: prints _putchar using putchar prototype
 *
 * return: Always 0 (Succcess)
 */

int main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

			return (0);
}
