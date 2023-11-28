static char	*alloc_str(unsigned int length)
{
	char	*res;

	res = (char *)malloc(length);
	if (res == NULL)
		return (NULL);
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

void	ft_putnbr(long int nbr, unsigned int *ret, unsigned int i, unsigned int length)
{
//char	*ft_itoa(long int n)
	char	*res;

	if (nbr <= 0)
		length = 2;
	length = count_len(length, nbr);
	res = alloc_str(length);
	if (res == NULL)
		return (NULL);
	i = length - 1;
	res[i--] = '\0';
	if (n == 0)
	{
		res[i] = '0';
		return (res);
	}
	fill_up(n, i, res);
	ft_putstr(res, ret, 0);
	free(res);
}
