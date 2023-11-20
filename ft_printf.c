int  ft_printf(const char *str, ...)
{
  va_list  ap;
  char  *dest;
  unsigned int  i;
  unsigned int  ret;

  va_start(ap, str);
  va_copy(dest, src);
  while (str[i])
  {
    if (str[i++] == '%')
      ft_checker(str[i], ap, &i, &ret);
    else
      ft_putchar(str[i]);
    i++;
  }
  va_end(ap);
}

void  ft_checker(char c, va_list ap, unsigned int *i, unsigned int *ret)
{
    if (c == 'c')
      ft_putchar(va_arg(ap, char), i);
    else if (c == '%')
      ft_putchar('%', i);
    else if (c == 's')
      ft_putstr(va_arg(ap, char *), i, ret);
    else if (c == 'd')
      ft_putnbr(va_arg(ap, int), i, ret);
    else if (c == 'u')
      ft_putnbr(va_arg(ap, unsigned int), i, ret);
    //else if (c == 'i')
    //else if (c == 'p')
    else if (c == 'x')
      ft_to_hex(va_arg(ap, long int), i, ret);
    else if (c == 'X')
      ft_to_hex_up(va_arg(ap, long int), i, ret);
}
    
