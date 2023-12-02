/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:05:05 by mpihur            #+#    #+#             */
/*   Updated: 2023/12/02 17:20:04 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	int				i;
	unsigned int	ret;

	i = 0;
	ret = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret += ft_checker(str[i], ap, 0);
		}
		else
			ret += ft_putchar(str[i], 0);
		i++;
	}
	va_end(ap);
	return (ret);
}

int	ft_checker(char c, va_list ap, int ret)
{
	if (c == 'c')
		ret = ft_putchar(va_arg(ap, int), ret);
	else if (c == '%')
		ret = ft_putchar('%', 0);
	else if (c == 's')
		ret = ft_putstr(va_arg(ap, char *), 0);
	else if (c == 'd')
		ret = ft_putnbr(va_arg(ap, int), ret);
	else if (c == 'u')
		ret = ft_putnbr(va_arg(ap, unsigned int), ret);
	else if (c == 'i')
		ret = ft_putnbr(va_arg(ap, int), ret);
	else if (c == 'p')
		ret = ft_ptr((uintptr_t)va_arg(ap, void *), ret);
	else if (c == 'x')
		ret = ft_to_hex(va_arg(ap, unsigned int), ret);
	else if (c == 'X')
		ret = ft_to_hex_up(va_arg(ap, unsigned int), ret);
	if (ret == -1)
		return (0);
	return (ret);
}
