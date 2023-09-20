#include "main.h"

/**
 * printf_ptr - prints hexdecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_ptr(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hexd_aux(a);
	return (b + 2);
}
