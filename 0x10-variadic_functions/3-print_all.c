#include "variadic_functions.h"

/**
 * print_all - print all format passed 
 * @format: type of argument passed
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char ch;
	char *s;
	int x;
	float f;
	va_list args;
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			ch = va_arg(args, int);
			printf("%c ", ch);
			break;
		case 'i':
			x = va_arg(args, int);
			printf("%d ", x);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f ", f);
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s ", s);
			break;
		}
		i++;
	}
	printf("\n");
}
