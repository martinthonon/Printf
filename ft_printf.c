#include "printf.h"

t_flags *ft_init(t_flags *tab)
{
    tab->zero = false; //ok
	tab->sign = false; //ok
    tab->sharp = false; //ok
    tab->space = false; //ok
    tab->dot = false; //ok
    tab->dash = false; //ok
	tab->width = false; //ok
	tab->precision = false; //ok
    return (tab);
}

int ft_printf(const char *formats, ...)
{
	int i;
	int len;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, formats);
	while (formats[i])
	{
		if (formats[i] == '%')
				len += ft_formats(formats, i + 1, args);
		else
			len += ft_putchar(*s);
		++i;
	}
	return (len);
}
