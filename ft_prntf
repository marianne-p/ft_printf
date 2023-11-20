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
      ft_checker(str[i], ap, i);
    else
      ft_putchar(str[i]);
    i++;
  }
  va_end(ap);
}
