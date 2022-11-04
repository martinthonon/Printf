#include "printf.h"

int ft_parse(const char formats, va_list args)
{
	if (formats == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (formats == 's')
		return(ft_putstr(va_arg(args, char *)));
	//else if (formats == 'p')
		//return (ft_putptr(va_arg(args, void *)));
	else if (formats == 'd' || formats == 'i')
		return (ft_itoa(va_arg(args, int)));
	else
		return (0);
	//else if (formats == 'x')
		//return (ft_puthexa(MIN_HEXA, va_arg(args, unsigned int)));
	//else if (formats == 'X')
		//return (ft_puthexa(MAX_HEXA, va_arg(args, unsigned int)));
	//else
	//return (ft_putchar('%'));
}

int ft_printf(const char *formats, ...)
{
	int len;
	va_list args;

	len = 0;
	va_start(args, formats);
	while (*formats)
	{
		if (*formats == '%')
		{
			if (ft_strchr(FORMATS, *(formats + 1)))
			{
				len += ft_parse(*(formats + 1), args);
				++formats;
			}
			else
			{
				++formats;
				len += ft_putchar(*formats);
				//return (0);
			}
		}
		else
			len += ft_putchar(*formats);
		++formats;
	}
	return (len);
}
