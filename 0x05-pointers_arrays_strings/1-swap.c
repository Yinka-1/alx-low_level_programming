#include "main.h"

/**
  * swap_int - swaps the value of a and b
  *
  * @a: variable to swap
  * @b: variable to swaap
  *
  * Return: Always 0
  *
  */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;

	*a = *b;

	*b = swp;

}
