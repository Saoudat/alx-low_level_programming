#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d is positive and greater than 5\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative less than 6 and not 0\n", n);
}
return (0);
}
