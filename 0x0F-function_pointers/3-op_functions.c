#include "calc.h"

/**
 * op_add - function that calculate the sum of argument value
 * @a: first value
 * @b: second value
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that calculate the sub of argument value
 * @a: first value
 * @b: second value
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that calculate the mul of argument value
 * @a: first value
 * @b: second value
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that calculate the div of argument value
 * @a: first value
 * @b: second value
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that calculate the mod of argument value
 * @a: first value
 * @b: second value
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
