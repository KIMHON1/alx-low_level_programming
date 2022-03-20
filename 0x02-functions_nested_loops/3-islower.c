#include "main.h"
/**
 *_islower - retruns 1 if lower case alphabet
 *0 other wise
 *@c: takes in a character
 *Retrun: 0 for upper case , 1 for lowercase
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

