#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i = 22;
	int	*p = &i;
	int	count;

	count = ft_printf("My: %c\n %s\n %u\n %d\n %i\n %p\n %x\n %X\n", 
			65, "abc", 2123443, -345, 0, p, i, i);

	ft_printf("Count = %d\n", count);
	count = printf("Or: %c\n %s\n %u\n %d\n %i\n %p\n %x\n %X\n", 
			65, "abc", 2123443, -345, 0, p, i, i);
	printf("Count = %d\n", count);
	return (0);
}
