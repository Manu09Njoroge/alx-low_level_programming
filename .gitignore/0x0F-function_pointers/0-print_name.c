#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - pointer name
 * @name: name to print
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
