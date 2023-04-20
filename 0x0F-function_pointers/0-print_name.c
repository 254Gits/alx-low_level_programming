#include <stddef.h>
#include "function_pointers.h"
/**
 *print_name - entry point
 *
 *@name:character pointer
 *@f: functions pointer
 *
 *
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
