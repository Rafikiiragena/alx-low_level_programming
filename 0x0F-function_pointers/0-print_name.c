#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name
 * @f: pointer to a function that takes
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f = &print_name;
}
