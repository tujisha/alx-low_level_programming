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
	char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}

