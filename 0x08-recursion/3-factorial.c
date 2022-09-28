#include "main.h"

/**
  * factorial - find the factorial of given input
  *
  * @n: input
  *
  * Return factorial
  * On error return -1
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
