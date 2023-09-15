#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * sum_them_all: returns the sum of all its parameters
 * @n: number of parameters passed to summation.
 * @...: variable or unknown number of parameters to calculate sum of
 *
 * Return 0 if n == 0
 * otherwise return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list xy;
	unsigned int i;

	int sum = 0;

	va_start(xy, n);

	for (i = 0; i < n; i++)
		sum += va_arg(xy, int);
	va_end(xy);
	return (sum);
}
