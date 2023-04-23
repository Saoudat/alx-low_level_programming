#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - put entry
 * Return: always 0
 */
int main(void)
{
int x;
int y;
srand(time(0));
x = rand() - RAND_MAX / 2;
y = x % 10;
if (x > 5)
{
printf("the last gigit of %d is %d and is greater than 5\n", x, y);
}
else if (x == 0)
{
printf("the last digit of %d is %d ad is 0\n", x, y);
}
else
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", x, y);
}
return (0);
}
