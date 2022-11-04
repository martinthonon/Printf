#include "printf.h"

int ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int ft_putstr(const char *str)
{
	return(write(1, str, ft_strlen(str)));
}