#ifndef FILE_MAIN
#define FILE_MAIN
#include <unistd.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void printNow(char *str);


#endif