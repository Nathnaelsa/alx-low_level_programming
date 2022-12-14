#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	long int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		if (i != 50)
			printf("%ld, ", t1);
		else
			printf("%ld", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}