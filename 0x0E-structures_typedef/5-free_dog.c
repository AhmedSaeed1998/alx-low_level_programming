#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees yo dawgs
 * @d: yo dawg
 *
 * Return: void
*/
void free_dog(dog__t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d)
	}
}
