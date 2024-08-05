#include <unistd.h>
void ft_putchar(char pu)
{
	write(1, &pu, 1);
}
