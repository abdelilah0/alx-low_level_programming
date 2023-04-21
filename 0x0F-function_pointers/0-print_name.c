#include "function_pointers.h"
#include <stdio.h>
	/**
	 * print_name - print name using pointer to function
	 * @name: string to add
	 * @f: pointer to function
	 * Return: nothing
	 **/
	void print_name(char *name, void (*_putchar)(char *))
	{
		if (name == NULL){
			return;}
		else{
		_putchar(name);
		}
	}

