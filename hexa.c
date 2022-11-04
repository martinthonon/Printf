/*#include "printf.h"

int ft_putptr(void *ptr)
{
	int len;
	len = ft_putstr("0x")
	len += ft_puthexa(MIN_HEXA, ptr)
	return (len);
}

int ft_puthexa(const char *formats, unsigned int ui)
{
	int len;

	len = 0;
	if (ui > 15)
		ft_puthexa(formats, ui / 16);
	len += ft_putchar(formats[ui % 16]);
	return (len);
}*/
