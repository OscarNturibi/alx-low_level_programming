#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;
	float f;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(i));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
