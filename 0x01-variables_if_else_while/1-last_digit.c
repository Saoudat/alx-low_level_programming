#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - put entry
 * Return: always 0
 */
int main(void)
{
int n;
int y;
srand(time(0));
n = rand() - RAND_MAX / 2;
y = n % 10;
if (n > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, y);
}
else if (n == 0)
{
printf("the last digit of %d is %d and is 0\n", n, y);
}
else
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, y);
}
return (0);
}
