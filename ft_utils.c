#include "printf.h"

char *ft_strchr(const char *str, int c)
{
	const char i = c;

	while (*str != i)
	{
		if (*str == '\0')
			return (NULL);
		++str;
	}
	return ((char *)str);
}

