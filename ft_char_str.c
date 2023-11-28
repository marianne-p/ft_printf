unsigned int	ft_strlen(char *str, unsigned int count)
{
	while (str[count++])
		 ;
	return (count);
}

void	ft_putchar(char a, unsigned int *ret)
{
	write(1, &a, 1);
	*ret++;
}

void	ft_putstr(char *str, unsigned int *ret, unsigned int i)
{
	i = ft_strlen(str, 0);
	write(1, str, i);
	*ret += i;
}
