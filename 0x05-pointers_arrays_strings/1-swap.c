#include "main.h"
#include <stdio.h>

/**
 * swap_int - change the pointer value
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 */

void swap_int(int *a, int *b)
{

	int  swap = *a;
	*a = *b;
	*b = swap;


}
