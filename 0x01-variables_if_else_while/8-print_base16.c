#include <stdio.h>
/**
* main - prints the alphabet in lowercase.
*
* Description: 'using the main function'
*
* Return: 0 on success
*/
int main(void)
{
int d;
char low;
for (d = '0'; d <= '9'; d++)
putchar(d);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}

