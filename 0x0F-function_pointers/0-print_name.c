#include "function_pointers.h"

/**
 * print_name - prints the name if not empty
 * @name : the name
 * @f : the orginal function
 *
 * return:noting
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
