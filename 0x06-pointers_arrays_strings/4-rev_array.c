#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tree, x;


	for (x = 0; x < n / 2; x++)
	{
		tree = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = tree;
	}
}
