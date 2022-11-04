#include "printf.h"

int ft_strlen(const char *str)
{
	const char *s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}

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

