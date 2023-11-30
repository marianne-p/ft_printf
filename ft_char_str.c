#include "ft_printf.h"

unsigned int	ft_strlen(char *str, unsigned int count)
{
	while (str[count])
		count++;
	return (count);
}

int	ft_putchar(int a, int ret)
{
	write(1, &a, 1);
	ret++;
	return (ret);
}

int	ft_putstr(char *str, int ret)
{
	ret = ft_strlen(str, 0);
	write(1, str, ret);
	return (ret);
}
