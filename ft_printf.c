#include "printf.h"

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
			if (ft_strchr("cspdiuxX%", *(str + 1)))
				len += ft_types(*(str + 1), args);
		}
		else
			len += ft_putchar(*str);
		++str;
	}
	return (len);
}
