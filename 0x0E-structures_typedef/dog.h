#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure data type
 * @name: stores the dog name
 * @age: stores the dog age.
 * @owner: store the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */
