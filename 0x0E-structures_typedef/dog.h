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

/* Prototypes */

/**
 * init_dog - function that initialize a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog.
 */
void print_dog(struct dog *d);

/**
 * dog_t new_dog - creates new dog.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dog.
 */
void free_dog(dog_t *d);

/* End of prototypes */

#endif /* DOG_H */
