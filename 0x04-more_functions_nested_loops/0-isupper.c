#include "main.h"

/**
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: equals to 1 if alphabet character is uppercase otherwise 0;
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
