#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // ATTENTION !!!!!

# define FORMATS "cspdiuxX%"
# define MAX_HEXA "0123456789ABCDEF"
# define MIN_HEXA "0123456789abcdef"

char *ft_strchr(const char *str, int c);
int ft_printf(const char *formats, ...);
int ft_putchar(const char c);
int ft_putstr(const char *str);
int ft_strlen(const char *str);
int ft_itoa(int i);
int ft_parse(const char formats, va_list args);
//int ft_putptr(void *ptr);
//int ft_puthexa(const char *str, unsigned int ui);


#endif
