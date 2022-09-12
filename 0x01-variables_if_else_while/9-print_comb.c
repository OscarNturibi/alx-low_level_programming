#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - printing numbers from 0-9 with commas and space *
 *Description:using the main function
 *Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
{
		putchar(c);
		if (c != '5')
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
