#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>


/**
 * op_add - tzid
 * @a: awl
 * @b: tani
 *
 * Return: al plus
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - n9s
 * @a: wa7d
 * @b: tnin
 *
 * Return: al tar7
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult
 * @a: awl
 * @b: tni
 *
 *  Return: al darb
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: wa7d
 * @b: tnin
 *
 *  Return: al divison
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - al mod
 * @a: wa7d
 * @b: tnin
 *
 * Return: yrj3 al mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);

}
