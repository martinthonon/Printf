#include "printf.h"

t_flags *ft_init(t_flags *tab)
{
    tab->zero = 0;
    tab->is_zero = 0;
    tab->sign = 0;
    tab->sharp = 0;
    tab->space = 0;
    tab->dot = 0;
    tab->precision = 0;
    tab->percent = 0;
    tab->dash = 0;
    return (tab);
}

int ft_printf(const char *str, ...)
{
	int len;
	va_list args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			//if (ft_strchr("cspdiuxX%", *(str + 1)))
				len += ft_formats(*(str + 1), args);
            //else
                //ft_putchar(*str);
		}
		else
			len += ft_putchar(*str);
		++str;
	}
	return (len);
}
