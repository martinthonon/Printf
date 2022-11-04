#include "printf.h"

static int ft_digit(int i)
{
	int len;

	len = 0;
	if (i == 0)
		++len;
	while (i != 0)
	{
		i /= 10;
		++len;
	}
	return (len);
}

int ft_itoa(int i)
{
	char *nstr;
	int cpy;
	int dgt;
	long nb;

	nb = i;
	dgt = ft_digit(i);
	if (i < 0)
	{
		nb *= -1;
		++dgt;
	}
	nstr = malloc(dgt + 1);
	if (!nstr)
		return (0);
	nstr[dgt] = '\0';
	cpy = dgt;
	while (dgt--)
	{
		nstr[dgt] = nb % 10 + '0';
		nb /= 10;
	}
	if (i < 0)
		nstr[0] = '-';
	ft_putstr(nstr);
	return(cpy);
}