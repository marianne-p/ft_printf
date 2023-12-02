/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:16:51 by mpihur            #+#    #+#             */
/*   Updated: 2023/12/02 17:19:31 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*string(char *hexa_number, unsigned long int num, int temp)
{
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hexa_number[i++] = temp;
		num = num / 16;
	}
	hexa_number[i] = '\0';
}

int	ft_to_hex(unsigned long int num, int ret)
{
	int		i;
	int		temp;
	char	hexa_number[17];

	i = 0;
	temp = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	hexa_number = string(hexa_number, num, temp);
	while (--i >= 0)
	{
		write(1, &hexa_number[i], 1);
		ret++;
	}
	return (ret);
}

static char	*string_up(char *hexa_number, unsigned long int num, int temp)
{
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_number[i++] = temp;
		num = num / 16;
	}
	hexa_number[i] = '\0';
}

int	ft_to_hex_up(unsigned long int num, int ret)
{
	int		i;
	int		temp;
	char	hexa_number[17];

	i = 0;
	temp = 0;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	hexa_number = string_up(hexa_number, num, temp);
	while (--i >= 0)
	{
		write(1, &hexa_number[i], 1);
		ret++;
	}
	return (ret);
}

int	ft_ptr(uintptr_t ptr, int ret)
{
	long int	num;

	num = (unsigned long int)ptr;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ret += ft_putstr("0x", 0);
	ret = ft_to_hex(num, ret);
	return (ret);
}
