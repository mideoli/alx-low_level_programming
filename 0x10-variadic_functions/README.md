# 0x10. C - Variadic functions

## Tasks

0. Write a function that returns the sum of all its parameters.

	* Prototype: <code>int sum_them_all(const unsigned int n, ...);</code>
	* If <code>n == 0</code>, return <code>0</code>

1. Write a function that prints numbers, followed by a new line.

	* Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code>
	* where <code>separator</code> is the string to be printed between numbers
	* and n is the number of integers passed to the function
	* You are allowed to use <code>printf</code>
	* If separator is <code>NULL</code>, don’t print it
	* Print a new line at the end of your function

2. Write a function that prints strings, followed by a new line.

	* Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code>
	* where <code>separator</code> is the string to be printed between the strings
	* and n is the number of strings passed to the function
	* You are allowed to use <code>printf</code>
	* If separator is NULL, don’t print it
	* If one of the string is NULL, print <code>(nil)</code> instead
	* Print a new line at the end of your function

3. Write a function that prints anything.

	* Prototype: <code>void print_all(const char * const format, ...);</code>
	* where format is a list of types of arguments passed to the function
		* <code>c: char</code>
		* <code>i: integer</code>
		* <code>f: float</code>
		* <code>s: char *</code> (if the string is NULL, print <code>(nil)</code> instead
		* any other char should be ignored
		* see example
	* You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code>
	* You can use a maximum of
		* 2 <code>while</code> loops
		* 2 <code>if</code>
	* You can declare a maximum of 9 variables
	* You are allowed to use <code>printf</code>
	* Print a new line at the end of your function.
