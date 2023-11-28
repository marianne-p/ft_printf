#include "ft_printf.h"

int  ft_printf(const char *str, ...)
{
	va_list  ap;
	char  *dest;
	//unsigned int  i;
	unsigned int  ret;

	i = 0;
	va_start(ap, str);
	va_copy(dest, src);
	while (str[i])
	{
		if (str[i++] == '%')
			ft_checker(str[i], ap, &ret, &i);

		else
			ft_putchar(str[i], &ret);
		i++;
	}
	va_end(ap);
	return (ret);
}

void	ft_checker(char c, va_list ap, unsigned int *i, unsigned int *ret)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, char), ret);
	else if (c == '%')
		ft_putchar('%', i);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), ret, 0);
	else if (c == 'd')
		ft_putnbr(va_arg(ap, int), ret, 0, 1);
	else if (c == 'u')
		ft_putnbr(va_arg(ap, unsigned int), ret, 0, 1);
	else if (c == 'i')
		ft_putnbr(va_arg(ap, int), ret, 0, 1);
	else if (c == 'p')
		ft_ptr((uintptr_t)va_arg(ap, void *), ret);
	else if (c == 'x')
		ft_to_hex(va_arg(ap, long int), ret);
	else if (c == 'X')
		ft_to_hex_up(va_arg(ap, long int), ret);
	*i++;
} 
