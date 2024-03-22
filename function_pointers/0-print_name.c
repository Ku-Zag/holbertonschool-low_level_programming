#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints naem
 * @name: vincent
 * @f: pointer
 * Description: prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
