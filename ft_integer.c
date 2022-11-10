#include "ft_printf.h"

int ft_putnbr(int i)
{
	int len;
	unsigned int nb;

	len = 0;
	nb = i;
	if (i < 0)
	{
		len = ft_putchar('-');
		nb = -i;
	}
	if (nb > 9)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putchar(nb % 10 + '0');
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}

int	ft_putbase(const char *formats, unsigned int base, size_t ui)
{
	int len;

	len = 0;
	if (ui > base - 1)
		len += ft_putbase(formats, base, ui / base);
	if (!formats)
		len += ft_putchar(ui % base + '0');
	else
		len += ft_putchar(formats[ui % base]);
	return (len);
}