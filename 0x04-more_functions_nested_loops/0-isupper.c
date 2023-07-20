#include <ctype.h>
/**
 * main - check if the charter is upper case
 * @c : is the charter
 *
 * return 0 if succes otherwise 1
*/

int main(char c)
{

	if (isupper(c))
		return (0);
	else
		return (1);
}
