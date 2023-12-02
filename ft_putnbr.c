/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:17:10 by mpihur            #+#    #+#             */
/*   Updated: 2023/12/02 17:17:12 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int n, int ret)
{
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
