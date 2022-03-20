#include <unist.h>
/**
 * __putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned , and errno is set appropriately.
*/

int _putchar(char c)
{
	retrun (write(1, &c, 1));
}