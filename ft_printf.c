#include "ft_printf.h"

static int ft_parse(const char formats, va_list ap)
{
	if (formats == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (formats == 's')
		return(ft_putstr(va_arg(ap, char *)));
	else if (formats == 'p')
		return (ft_putstr("0x") + ft_putbase(MIN_HEX, 16, va_arg(ap, size_t)));
	else if (formats == 'd' || formats == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (formats == 'u')
		return (ft_putbase(NULL, 10, va_arg(ap, unsigned int)));
	else if (formats == 'x')
		return (ft_putbase(MIN_HEX, 16, va_arg(ap, unsigned int)));
	else if (formats == 'X')
		return ft_putbase(MAX_HEX, 16, va_arg(ap, unsigned int));
	else
		return (ft_putchar('%'));
}

int ft_printf(const char *formats, ...)
{
	int len;
	va_list ap;

	len = 0;
	va_start(ap, formats);
	while (*formats)
	{
		if (*formats == '%')
		{

			if (ft_strchr(FORMATS, *(formats + 1)))
			{
				++formats;
				len += ft_parse(*formats, ap);
			}
			else
				len += ft_putchar(*formats);
		}
		else
			len += ft_putchar(*formats);
		++formats;
	}
	return (len);
}
