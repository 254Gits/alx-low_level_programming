#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - name is printed
 *@name: name
 *@f:function to pointer name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
