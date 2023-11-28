#include <stdlib.h>
/*
static char	*check_alloc(int length)
{
	char	*res;

	res = (char *)malloc(length);
	return (res);
}

static void	fill_up(int n, int i, char *res)
{
	if (n == -2147483648)
	{
		res[i--] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = (char)((n % 10) + '0');
		n /= 10;
	}
}

static	int	count_len(int length, int n)
{
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(long int n)
{
	int		i;
	int		length;
	char	*res;

	length = 1;
	if (n <= 0)
		length = 2;
	length = count_len(length, n);
	res = check_alloc(length);
	if (res == NULL)
		return (NULL);
	i = length - 1;
	res[i--] = '\0';
	if (n == 0)
	{
		res[i] = '0';
		return (res);
	}
	fill_up(n, i, res);
	return (res);
}
*/
char*	ft_itoa(long int num) 
{
    int		buffer_size;
    char	*buffer;
    int		is_negative;
    int		index;
    int		digit;

    buffer_size = 12;
    buffer = (char *)malloc(buffer_size);
    if (buffer == NULL)
	    return NULL;
    if (num < 0)
	    is_negative = 1;
    else
       is_negative = 0;
    index = buffer_size - 1;
    if (num == 0)
	    buffer[--index] = '0';
    else
    {
        if (is_negative)
		num = -num;
	while (num > 0) 
	{
		digit = num % 10;
		buffer[--index] = '0' + digit;
		num /= 10;
	}
	if (is_negative)
		buffer[--index] = '-';
    }
    buffer[buffer_size - 1] = '\0';
    return (&buffer[index]);
}
/*
#include <unistd.h>

int	main(void)
{
	int	a = -2147483648;
	write(1, custom_itoa(a), 11);
}*/
