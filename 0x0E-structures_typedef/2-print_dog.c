#include <stdio.h>
#include "dog.h"

/**
  * print_dog - A function that prints a struct
  * @d: pointer to the struct
  *
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)");
	}

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
