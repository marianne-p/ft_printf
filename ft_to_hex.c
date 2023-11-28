#include "ft_printf.h"
/*
int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
	{
		i++;
	}
	return (i);
}*/

void	ft_to_hex(long int num, unsigned int *ret)
{
	int	i;
	int	temp;
	char hexa_Number[17];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hexa_Number[i++] = temp;
		num = num / 16;
	}
	hexa_Number[i] = '\0';
	write (1, "0x", 2);
	*ret += 2;
	while (--i >= 0)
	{
		write(1, &hexa_Number[i], 1);
		*ret++;
	}
}

void	ft_to_hex_up(long int num, unsigned int *ret)
{
	int	i;
	int	temp;
	char hexa_Number[17];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_Number[i++] = temp;
		num = num / 16;
	}
	hexa_Number[i] = '\0';
	write (1, "0X", 2);
	*ret += 2;
	while (--i >= 0)
	{
		write(1, &hexa_Number[i], 1);
		*ret++;
	}
}

void	ft_ptr(uintptr_t ptr, unsigned int *ret)
{
	unsigned int	num;

	num = (unsigned int)ptr;
	ft_to_hex(num, ret);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_to_hex_up(1601);
	ft_to_hex(1601);
	ft_to_hex_up(1615);
	ft_to_hex(1615);
}*/
