#include "main"
/**
 * _islower -returns 1 if lower case alphabet and 0 other wise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */
 
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

