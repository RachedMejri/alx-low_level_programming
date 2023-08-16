#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name if not empty
 * @name : the name
 * @f : the orginal function
 *
 * return:noting
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
		free(name);
}
