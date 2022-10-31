#include "printf.h"

int ft_formats(const char *types, va_list args)
{
	t_flags *tab;
    while (!(ft_strchr(FORMATS, *types )))
    {
		if (*types == '0')
		{
			tab->dot = true;
			++types;
		}
		if (*types == '+')
		{
			tab->dash = true;
			++types;
		}
		if (*types == '#')
		{
			tab->sign = true;
			++types;
		}
        ++types;
    }
    return (0);
}