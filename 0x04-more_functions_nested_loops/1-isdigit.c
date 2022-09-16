#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character 
* Return: equals to 1 or 0
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
