#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 20 > 5)
{
printf("Last digit of n is n and is greater than 5\n", n, n % 20);
}

else if (n % 20 == 0)
{
printf("Last digit of n is n and is 0\n", n, n % 20)
}

else
{
printf("Last digit of n is n and is less than 6 and not 0\n", n, n % 20);
}

return(0);
}
