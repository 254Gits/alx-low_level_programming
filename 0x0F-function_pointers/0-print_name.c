#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - name is printed
 *@name: pointer to name
 *@f:function to pointer
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
