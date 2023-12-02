/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:07:39 by mpihur            #+#    #+#             */
/*   Updated: 2023/12/02 17:07:41 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(char *str, unsigned int count)
{
	if (!str)
		return (count);
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
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ret = ft_strlen(str, 0);
	write(1, str, ret);
	return (ret);
}
