#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print if the number is positive, zero, or negative
 *
 *Description:using the main function
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
{
		putchar(c);
}
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
}
{
	putchar('\n');
}
	return (0);
}
