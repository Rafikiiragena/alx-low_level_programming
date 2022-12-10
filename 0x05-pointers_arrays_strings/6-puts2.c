#include "main.h"
#include <stdio.h>
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			putchar(str[n]);
		else
			continue;
	}
	putchar('\n');
}
