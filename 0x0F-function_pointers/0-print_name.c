#include "function_pointers.h"

/**
 * printNow - a function pointed 'to' that print name.
 * @str: the string passed to the function.
 * Return: nothing.
*/
void printNow(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
}

/**
 * print_name - function take func pointer as a param.
 * @name: string passed to the function.
 * @f: the function pointer.
 * Return: nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	f = printName;
	f(name);
}
