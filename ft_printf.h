#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define FORMATS "cspdiuxX%"
# define MAX_HEX "0123456789ABCDEF"
# define MIN_HEX "0123456789abcdef"

char	*ft_strchr(const char *str, int c);
int		ft_printf(const char *formats, ...);
int		ft_putchar(const char c);
int		ft_putstr(const char *str);
int		ft_strlen(const char *str);
int		ft_putnbr(int n);
int		ft_putbase(const char *formats, unsigned int base, size_t ui);

#endif
