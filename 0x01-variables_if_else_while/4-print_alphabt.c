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
	char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
	return (0);
}

