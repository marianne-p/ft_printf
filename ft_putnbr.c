#include "ft_printf.h"

int	ft_putnbr(long int n, int ret)
{
	/*if (n == -2147483648)
	{
		ret += ft_putnbr(-2, fd);
		ret += ft_putnbr(147483648, fd);
		return ;
	}*/
	if (n < 0)
	{
		ret += ft_putchar('-', 0);
		n = n * (-1);
	}
	if (n < 10)
	{
		ret += ft_putchar(n + '0', 0);
		return (ret);
	}
	else
	{
		ret += ft_putnbr(n / 10, 0);
		ret += ft_putchar(n % 10 + '0', 0);
	}
	return (ret);
}


/*void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*set;

	i = 0;
	set = (char *)s;
	while (i < n)
	{
		*(set + i) = '\0';
		i++;
	}
}*/
/*
static char	*alloc_str(unsigned int length)
{
	char	*res;

	res = (char *)malloc(length);
	if (res == NULL)
		return (NULL);
	length--;
	while (res[length])
	{
		res[length] = '\0';
		length--;
	}
	return (res);
}

static void	fill_up(long int n, unsigned int i, char *res)
{
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = (char)((n % 10) + '0');
		n /= 10;
	}
}

static	unsigned int	count_len(unsigned int length, long int n)
{
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

int	ft_putnbr(long int nbr, int ret, unsigned int i, unsigned int length)
{
	char	*res;

	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nbr < 0)
		length = 2;
	length = count_len(length, nbr);
	res = alloc_str(length);
	if (res == NULL)
		return (-1);
	i = length - 1;
	res[i--] = '\0';
	fill_up(nbr, i, res);
	ret = ft_putstr(res, 0);
	free(res);
	return (ret);
}*/
