#include <unistd.h>

void ft_printptr(void* ptr) 
{
	//char hexBuffer[17];
	//char* hexChars = "0123456789abcdef";
	uintptr_t ptrValue = (uintptr_t)ptr;
	//int	i;

	i = 15;
	//hexBuffer[16] = '\0';
	ft_to_hex(ptrValue);
	/*while (i >= 0) 
	{
		hexBuffer[i] = hexChars[ptrValue & 0xf]; // Mask the lowest 4 bits and map to hex digit
        	ptrValue >>= 4; // Shift right by 4 bits
		i--;
	}
	write(1, hexBuffer, 16);*/
}
/*
int	main()
{
	int x = 42;
	void* ptr = &x;

	// Print the pointer as a hexadecimal number
	printPointerHex(ptr);
	return (0);
}*/
