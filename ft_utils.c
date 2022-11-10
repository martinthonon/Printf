/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:03:17 by mathonon          #+#    #+#             */
/*   Updated: 2022/11/10 11:05:59 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	const char	i = c;

	while (*str != i)
	{
		if (*str == '\0')
			return (NULL);
		++str;
	}
	return ((char *)str);
}

int	ft_strlen(const char *str)
{
	const char	*s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(const char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}
