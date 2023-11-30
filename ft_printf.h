#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

void	ft_checker(char c, va_list ap, unsigned int *i, unsigned int *ret);
int	ft_printf(const char *str, ...);
void	ft_ptr(uintptr_t ptr, unsigned int *ret);
void	ft_to_hex_up(long int num, unsigned int *ret);
unsigned int	ft_strlen(char *str, unsigned int count);
void	ft_to_hex(long int num, unsigned int *ret);
void	ft_putchar(int a, unsigned int *ret);
void	ft_putstr(char *str, unsigned int *ret, unsigned int i);
//char	*ft_itoa(long int num); 
void	ft_putnbr(long int nbr, unsigned int *ret, unsigned int i, unsigned int length);

#endif
