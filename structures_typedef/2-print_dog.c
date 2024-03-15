#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age < 0 || d->owner == NULL)
		printf("(nil)");
	if (d == NULL)
	{
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}