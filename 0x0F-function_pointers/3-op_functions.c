#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>


/**
 * op_add - al plus
 * @a: nomro wa7d
 * @b: nomro tnin
 *
 * Return: yzido
 *
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - 3amaliyt tar7
 * @a: nomro wa7d
 * @b: ...
 *
 * Return: yrj3 3amliyt tar7 mta3 zouz
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - darb
 * @a: nomro wa7d
 * @b: nomro tnin
 *
 *  Return: darb mt3 wa7d wa tnin
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: nomro wa7d
 * @b: nomro tnin
 *
 *  Return: div mt3 wa7d wa tnin
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod m
 * @a: wa7d
 * @b: tnin
 *
 * Return: yrj3 al mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
