#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - print if the number is positive, zero, or negative
*
* Description: 'using the main function'
* This program prints "Programming is positive, zero or negative
* Return: 0
**/
int main(void)
{
	int n;
int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, l);
}
else if (I == 0)
{
printf("last digit of %d is %d and is 0\n", n, l);
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
}

	return (0);
}

