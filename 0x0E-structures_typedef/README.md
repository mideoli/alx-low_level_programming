# 0x0E. C - Structures, typedef

## Tasks

0. Define a new type <code>struct dog</code> with the following elements:

	* <code>name</code>, type = <code>char *</code>
	* <code>age</code>, type = <code>float</code>
	* <code>owner</code>, type = <code>char *</code>

1. Write a function that initialize a variable of type <code>struct dog</code>

	* Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code>

2. Write a function that prints a <code>struct dog</code>

	* Prototype: <code>void print_dog(struct dog *d);</code>
	* Format: see example bellow
	* You are allowed to use the standard library
	* If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)
	* If <code>d</code> is <code>NULL</code> print nothing.

3. Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.

4. Write a function that creates a new dog.

	* Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code>
	* You have to store a copy of <code>name</code> and <code>owner</code>;
	* Return <code>NULL</code> if the function fails.

5. Write a function that frees dogs.

	* Prototype: <code>void free_dog(dog_t *d);</code>
