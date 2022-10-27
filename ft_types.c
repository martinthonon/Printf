#include "printf.h"

int ft_types(const char types, va_list args)
{
	if (types == 'p')
		return (ft_putptr());
	else if (types == 'x' || types == 'X')
		return (ft_puthexa());
	else if (types == 's' || types == 'c' || types == '%')
		return (ft_putstr());
	else if (types == 'd' || types == 'i' || types == 'u')
		return (ft_putnbr());
}