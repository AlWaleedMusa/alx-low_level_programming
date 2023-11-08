#include "function_pointers.h"

/**
 * print_name - function take func pointer as a param.
 * @name: string passed to the function.
 * @f: the function pointer.
 * Return: nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
