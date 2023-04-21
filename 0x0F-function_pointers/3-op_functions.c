#include <stddef.h>
#include "function_pointers.h"
/**
 *op_add - entry point
 *
 *@a:interger
 *@b: second interger
 *
 *
 *
 *Return: interger addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - entry point
 *
 *@a:first interger
 *@b:second interger
 *
 *
 *
 *Return: interger subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - entry point
 *
 *@a:first a
 *@b: second b to be multiplied
 *
 *
 *
 *Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - entry point
 *
 *@a:a first interger
 *@b:b second interger
 *
 *
 *
 *Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - entry point
 *
 *@a:first interger
 *@b:second interger
 *
 *
 *
 *Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
