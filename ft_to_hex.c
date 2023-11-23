#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_to_hex(long int num)
{
	int	i;
	int	temp;
	char hexa_Number[100];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hexa_Number[i++] = temp;
		num = num / 16;
	}
	hexa_Number[i] = '\0';
	while (--i >= 0)
		write(1, &hexa_Number[i], 1);
	//write(1, hexa_Number, i + 1);
	write(1, "\n", 1);
}

void	ft_to_hex_up(long int num)
{
	int	i;
	int	temp;
	char hexa_Number[100];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_Number[i++] = temp;
		num = num / 16;
	}
	hexa_Number[i] = '\0';
	while (--i >= 0)
		write(1, &hexa_Number[i], 1);
	//write(1, hexa_Number, i + 1);
	write(1, "\n", 1);
}

#include <stdio.h>

int	main(void)
{
	ft_to_hex_up(1601);
	ft_to_hex(1601);
	ft_to_hex_up(1615);
	ft_to_hex(1615);
}
