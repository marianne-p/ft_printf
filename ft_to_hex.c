#include "ft_printf.h"

int	ft_to_hex(long int num, int ret)
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
	ret += ft_putstr("0x", 0);
	while (--i >= 0)
	{
		write(1, &hexa_Number[i], 1);
		ret++;
	}
	return (ret);
}

int	ft_to_hex_up(long int num, int ret)
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
	ret += ft_putstr("0X", 0);
	while (--i >= 0)
	{
		write(1, &hexa_Number[i], 1);
		ret++;
	}
	return (ret);
}

int	ft_ptr(uintptr_t ptr, int ret)
{
	unsigned int	num;

	num = (unsigned int)ptr;
	ret = ft_to_hex(num, ret);
	return (ret);
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
