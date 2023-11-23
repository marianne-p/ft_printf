static char	*check_alloc(int length)
{
	char	*res;

	res = (char *)malloc(length);
	return (res);
}

static void	fill_up(int n, int i, char *res)
{
	if (n == -2147483648)
	{
		res[i--] = '8';
		n /= 10;
	}
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

static	int	count_len(int length, int n)
{
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		i;
	int		length;
	char	*res;

	length = 1;
	if (n <= 0)
		length = 2;
	length = count_len(length, n);
	res = check_alloc(length);
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
	return (res);
}
