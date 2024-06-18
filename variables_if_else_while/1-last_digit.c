#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: if the number is greater than 5: printf is greater than 5
 * if the number is 0: printf is 0
 * if the number is less than 6 and not 0: printf is less than 6 and not 0
 * Return: 0 on success
 */
int main(void)
{
	int n;
int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
	/* your code goes there */
return (0);
}
