#include "main.h"
#include <stddef.h>

/**
 *print_name - entry point
 *@name: pointer to name
 *@f:function to pointer
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	  (*f)(name);
}
