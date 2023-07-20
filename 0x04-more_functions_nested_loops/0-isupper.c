#include "main.h"
#include <ctype.h>
/**
* _isupper - Checks whether the character passed to it is in uppercase or not.
 *
 * @c: The character to be checked.
 *
 * return: 0 if upper 1 otherwise
*/

int _isupper(int c)
{

	if (isupper(c))
		return (0);
	else
		return (1);

}
