#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

char *ft_strchr(const char *str, int c);
int ft_printf(const char *str, ...);
int ft_types(const char types, va_list args);

#endif
