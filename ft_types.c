#include "printf.h"

void ft_formats(const char *formats, int i, va_list args)
{
	t_flags *tab;
    while (!(ft_strchr(FORMATS, formats[i] )))
    {
		if (formats[i] == '0')
			tab->zero = true;
		else if (*formats[i] == '+')
			tab->sign = true;
		else if (formats[i] == '#')
			tab->sharp = true;
		else if (formats[i] == ' ')
			tab->space = true;
		else if (formats[i] == '.')
			tab->dot = true;
		else if (formats[i] == '/')
			tab->dash = true;
		else if (formats[i] == '-')
			tab->width = true;
		else if (formats[i] == '*')
			tab->precision = true;
        ++i;
    }
}