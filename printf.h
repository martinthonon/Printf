#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <limits.h>

# define FORMATS "cspdiuxX%"

typedef struct s_flags
{
    int zero;
    int sign;
    int sharp;
    int space;
    int dot;
    int dash;
	int width;
	int precision;

}               t_flags;

typedef enum	e_bool
{
	false
	true
}				t_bool;


char *ft_strchr(const char *str, int c);
int ft_printf(const char *str, ...);
int ft_formats(const char *types, int index, va_list args);
t_flags *ft_init(t_flags *tab);

#endif
