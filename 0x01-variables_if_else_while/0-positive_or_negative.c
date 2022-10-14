#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - entry point
  * Description: prints 0,negative or posative numbers
  * Return: return 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive number", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
		printf("%d is negative number", n);
	return (0);
}
