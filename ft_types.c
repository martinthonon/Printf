#include "printf.h"

int ft_formats(const char types, va_list args)
{
    while (!(ft_strchr(*types, FORMATS)))
    {

        ++types;
    }
    return (0);
}