#include<stdlib.h>
#include<time.h>
#include <stdio.h>
/**
* Main - Prints all single digit numbers of base 10
* starting from 0
* Only using putchar and without char variables.
*
* Return: Always 0
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + "0");
} 
putchar("\n"); 
return (0); 
}
