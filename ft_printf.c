int  ft_printf(const char *str, ...)
{
  va_list  ap;
  char  *dest;
  unsigned int  i;

  va_start(ap, str);
  va_copy(dest, src);
  while (str[i])
  {
    if (str[i++] == '%')
      ft_checker(str[i], ap, &i);
    else
      ft_putchar(str[i]);
    i++;
  }
  va_end(ap);
}

void  ft_checker(char c, va_list ap, unsigned int *i)
{
    if (c == 'c')
      ft_putchar(va_arg(ap, char), i);
    else if (c == 's')
      ft_putstr(va_arg(ap, char *), i);
    else if (c == 'd')
      ft_putnbr(va_arg(ap, int), i);
    else if (c == 'u')
      ft_putnbr(va_arg(ap, unsigned int), i);
    //else if (c == 'i')
    else if (c == 'x')
      ft_to_hex(va_arg(ap, long int), i);
    else if (c == 'X')
      ft_to_hex_up(va_arg(ap, long int), i);
}
    
