#include "variadic_functions.h"

int main(void)
{
    print_all("ceiaes", 'B', 3, "stSchool");
    return (0);
}

/**
 * print_all - print all format passed 
 * @format: type of argument passed
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *comma = "";
	va_list args;
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", comma, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", comma, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", comma, va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if(!s)
				s = "(nil)";
			printf("%s%s", comma, s);
			break;
		}
		comma = ", ";
		i++;
	}
	printf("\n");
}
