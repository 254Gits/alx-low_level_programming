#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion- entry point
 * @n:pointer to int
 * 
 *
 * Return: n and G/2
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return _sqrt_helper(n, n/2);
    }
}

int _sqrt_helper(int n, int guess) {
    if (guess * guess == n) {
        return guess;
    } else if (guess * guess < n) {
        return _sqrt_helper(n, guess+1);
    } else {
        return _sqrt_helper(n, guess/2); 
    }
}

