#include <stdio.h>
/**
*  main - prints the alphabet in lowercase.
(*
*  Description: 'using the main function'
*  This program prints "Programming is positive, zero or negative
*  Return: 0 on success
**/
int main(void)
{
	int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(' , ');
putchar('   ');
}
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
	return (0);
}

