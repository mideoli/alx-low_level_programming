#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct of type dog.
 *
 * Description: If an element of @d is NULL,
 * print (nil) instead of this element.
 * If @name is NULL, print Name: (nil).
 * If @d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");

	printf("Name: %s\n", d->name);

	if (d->name == NULL)
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
