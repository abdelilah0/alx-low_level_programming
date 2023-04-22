#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - Returns the sum of all its paramters.
	 * @n: The number of paramters passed to the function.
	 * @...: A variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         Otherwise - the sum of all parameters.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;

		if(n != 0){
		va_start(ap, m);

		for (i = 0; i < m; i++)
			sum += va_arg(ap, int);


		va_end(ap);
		}else{ return 0;}

		return (sum);
	}

