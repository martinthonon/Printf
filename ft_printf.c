#include "printf.h"

t_flags *ft_init(t_flags *tab)
{
    tab->zero = false; //ok
	tab->sign = false; //ok
    tab->sharp = false; //ok
    tab->space = false;
    tab->dot = false;
    tab->dash = false;
	tab->width = false;
	tab->precision = false;
    return (tab);
}

int ft_printf(const char *str, ...)
{
	const char *s;
	int len;
	va_list args;

	s = str;
	len = 0;
	va_start(args, str);
	while (*s)
	{
		if (*s == '%')
		{
			//if (ft_strchr("cspdiuxX%", *(str + 1)))
				len += ft_formats(str, args);
            //else
                //ft_putchar(*str);
		}
		else
			len += ft_putchar(*s);
		++s;
	}
	return (len);
}
